#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
  // for(int i = pos; i > 0; i--) std::swap(mData[mFront+i], mData[mFront+i-1]);
  while(pos--) std::swap(mData[(mFront+pos+1)%mCap], mData[(mFront+pos)%mCap]);
}

#endif

