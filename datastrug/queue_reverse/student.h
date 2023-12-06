#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  size_t size = (abs(a-b)+1)/2;
  for(int i = 0; i < size; i++){
    std::swap(mData[(mFront+a++)%mCap], mData[(mFront+b--)%mCap]);
  }
}

#endif
