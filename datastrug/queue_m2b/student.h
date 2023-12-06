#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  for(int i=mFront + pos; i < mSize+mFront-1 ; i++){
   std::swap(mData[i%mCap],mData[(i+1)%mCap]);
  }
}

#endif

