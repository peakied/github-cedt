#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  size_t count = 0;
  T *start = mData, *end = mData;
  while(start < end+mSize) count+=mLess(end[pos], *start++);
  return count;
}

#endif