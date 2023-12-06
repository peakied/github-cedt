// This JavaScript code will add a simple animation to the title of the page.

const toDoInput = document.querySelector('.todo-input');
const toDoBtn = document.querySelector('.todo-btn');
const toDoList = document.querySelector('.todo-list');
const standardTheme = document.querySelector('.standard-theme');
const lightTheme = document.querySelector('.light-theme');
const darkerTheme = document.querySelector('.darker-theme');
const dofalse = document.querySelector('.false');

toDoList.addEventListener('click', deletecheck);
document.addEventListener("DOMContentLoaded", getTodos);



////////////////////////////////////////////////////////////

let savedTheme = localStorage.getItem('savedTheme');
savedTheme === null ?
    changeTheme('standard')
    : changeTheme(localStorage.getItem('savedTheme'));

////////////////////////////////////////////////////////////

document.getElementById("todo-btn").addEventListener('click', ()=>{
    // Prevents form from submitting / Prevents form from reloading;
    event.preventDefault();
    dofalse.innerHTML = '</br>';
    
    // toDo DIV;
    const toDoDiv = document.createElement("div");
    toDoDiv.classList.add('todo', `${savedTheme}-todo`);
    // Create LI
    const newToDo = document.createElement('li');
    if (toDoInput.value === '') {
            dofalse.innerHTML = 'Write something in!';
        }
    else {
        let checksave = JSON.parse(localStorage.getItem('todos'));
        const locatesave =  checksave.indexOf(toDoInput.value);
        if(locatesave != -1){
            dofalse.innerHTML = 'Already have this list!';
            return;
        }

        // newToDo.innerText = "hey";
        newToDo.innerText = toDoInput.value;
        newToDo.classList.add('todo-item');
        toDoDiv.appendChild(newToDo);

        // Adding to local storage;

        savelocal(toDoInput.value);

        // check btn;
        const checked = document.createElement('button');
        checked.innerHTML = '<i class="fas fa-check"></i>';
        checked.classList.add('check-btn', `${savedTheme}-button`);
        toDoDiv.appendChild(checked);
        // delete btn;
        const deleted = document.createElement('button');
        deleted.innerHTML = '<i class="fas fa-trash"></i>';
        deleted.classList.add('delete-btn', `${savedTheme}-button`);
        toDoDiv.appendChild(deleted);

        // Append to list;
        toDoList.appendChild(toDoDiv);

        // CLearing the input;
        toDoInput.value = '';
    }

})  

////////////////////////////////////////////////////////////

function savelocal(todo){
  //Check: if item/s are there;
  let todos;
  if(localStorage.getItem('todos') === null) {
      todos = [];
  }
  else {
      todos = JSON.parse(localStorage.getItem('todos'));
  }
  todos.push(todo);
  localStorage.setItem('todos', JSON.stringify(todos));
}

////////////////////////////////////////////////////////////

function deletecheck(event){
    const item = event.target;
    let todos = JSON.parse(localStorage.getItem('todos'));
    // console.log(todos);
    const todoIndex =  todos.indexOf(item.innerText);
    todos.splice(todoIndex, 1);
    localStorage.setItem('todos', JSON.stringify(todos));
    if(item.classList[0] === 'delete-btn')
    {
        // item.parentElement.remove();
        // animation
        item.parentElement.classList.add("fall");

        //removing local todos;

        item.parentElement.addEventListener('transitionend', function(){
            item.parentElement.remove();
        })
    }

    // check
    if(item.classList[0] === 'check-btn')
    {
        item.parentElement.classList.toggle("completed");
    }
}

///////////////////////////////////////////////////////////
function getTodos() {
  //Check: if item/s are there;
  let todos;
  if(localStorage.getItem('todos') === null) {
      todos = [];
  }
  else {
      todos = JSON.parse(localStorage.getItem('todos'));
  }

  todos.forEach(function(todo) {
      // toDo DIV;
      const toDoDiv = document.createElement("div");
      toDoDiv.classList.add("todo", `${savedTheme}-todo`);

      // Create LI
      const newToDo = document.createElement('li');
      
      newToDo.innerText = todo;
      newToDo.classList.add('todo-item');
      toDoDiv.appendChild(newToDo);

      // check btn;
      const checked = document.createElement('button');
      checked.innerHTML = '<i class="fas fa-check"></i>';
      checked.classList.add("check-btn", `${savedTheme}-button`);
      toDoDiv.appendChild(checked);
      // delete btn;
      const deleted = document.createElement('button');
      deleted.innerHTML = '<i class="fas fa-trash"></i>';
      deleted.classList.add("delete-btn", `${savedTheme}-button`);
      toDoDiv.appendChild(deleted);

      // Append to list;
      toDoList.appendChild(toDoDiv);
  });
}

////////////////////////////////////////////////////////////
    

standardTheme.addEventListener('click', () => changeTheme('standard'));
lightTheme.addEventListener('click', () => changeTheme('light'));
darkerTheme.addEventListener('click', () => changeTheme('darker'));

function changeTheme(color) {
  document.body.className = color;
  localStorage.setItem('savedTheme', color);
  // Change blinking cursor for darker theme:
  color === 'darker' ? 
      document.getElementById('title').classList.add('darker-title')
      : document.getElementById('title').classList.remove('darker-title');

  document.querySelector('input').className = `${color}-input`;
  // Change todo color without changing their status (completed or not):
  document.querySelectorAll('.todo').forEach(todo => {
      Array.from(todo.classList).some(item => item === 'completed') ? 
          todo.className = `todo ${color}-todo completed`
          : todo.className = `todo ${color}-todo`;
  });
  // Change buttons color according to their type (todo, check or delete):
  document.querySelectorAll('button').forEach(button => {
      Array.from(button.classList).some(item => {
          if (item === 'check-btn') {
            button.className = `check-btn ${color}-button`;  
          } else if (item === 'delete-btn') {
              button.className = `delete-btn ${color}-button`; 
          } else if (item === 'todo-btn') {
              button.className = `todo-btn ${color}-button`;
          }
      });
  });
}



//music
init()
function init()
{
  document.addEventListener('click', function(evt) { if (evt.target.tagName.toLowerCase() == 'li') { play(evt.target); } }, false);
}

function skip()
{
}

function play(elem)
{
    var audio = document.getElementById('audio');
    audio.src = elem.textContent + '.mp3';
    audio.play();
    elem.className = 'playing';
    skip = function()
    {
            elem.className = '';
            if (elem.nextElementSibling)
            {
                play(elem.nextElementSibling);
            }
    }
}

