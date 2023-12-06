#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <algorithm>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  std::vector<T> v;
  for(T i : pos) v.push_back(i);
  sort(v.begin(), v.end());
  int count = 0, in = 0;
  for(int i = 0; i < mSize; i++){
    if(i == v[count]){
      count++;
      continue;
    }
    mData[(mFront+in++)%mCap] = mData[(mFront+i)%mCap];
  }
  mSize-=v.size();
}

#endif
