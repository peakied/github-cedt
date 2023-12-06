#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  CP::stack<T> stack;
  for(int i = 0; i < pos; i++){
    stack.push(top());
    pop();
  }
  push(value);
  for(int i = 0; i < pos; i++){
    push(stack.top());
    stack.pop();
  }
}

#endif
