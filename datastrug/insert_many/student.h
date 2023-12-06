#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  size_t s = data.size();
  T *arr = new T[mSize+s]();
  size_t count = 0;
  
  std::sort(data.begin(), data.end());

  for(size_t c = 0; c < mSize; c++){
    if(c == data[count].first){
      arr[c+count] = data[count].second;
      count++;
    }
    arr[c+count] = mData[c];
  }
  if(data[count].first == mSize) arr[mSize+s-1] = data[count].second;
  delete[] mData;
  mData = arr;
  mSize = mSize+s;
  mCap = mSize;
}

#endif


// 3
// 1 2 3
// 3
// 3 1
// 0 3 
// 1 2