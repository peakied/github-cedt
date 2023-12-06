#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  T *arr = new T[mSize+(last-first)];
  size_t a = mSize, sizein = last-first, count = 0;
  for(size_t i = 0; i < a+sizein; i++){
    while(i >= position-begin() && first != last){
      arr[i] = *first;
      first++;
      i++;
    }
    arr[i] = mData[count++];
  }
  delete[] mData;
  mData = arr;
  mSize = a+sizein;
  mCap = mSize;
}

#endif
