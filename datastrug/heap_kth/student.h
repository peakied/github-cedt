#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  T all[7];
  int i;
  for(i = 0; i < 7 && i<mSize; i++){ all[i] = mData[i];
  }
  std::sort(all, all+i, mLess);
  return all[i-k];
}

#endif
