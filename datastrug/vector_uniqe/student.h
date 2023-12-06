#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure

#include <set>

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  
  T *arr = new T[mSize]();
  std::set<T> dulp;
  size_t size = mSize;
  int count = 0;
  for(int i = 0; i < size; i++){
      if(dulp.find(mData[i]) == dulp.end()){
          arr[count] = mData[i];
          dulp.insert(mData[i]);
          count++;
      }
  }
  delete[] mData;
  mData = arr;
  mSize = count;
}

#endif
