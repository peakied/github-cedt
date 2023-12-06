#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  for(CP::list<T> &i : ls){
    i.mHeader->next->prev = mHeader->prev;
    i.mHeader->prev->next = mHeader;
    mHeader->prev->next = i.mHeader->next;
    mHeader->prev = i.mHeader->prev;
    i.mHeader->prev = i.mHeader;
    i.mHeader->next = i.mHeader;
    mSize+=i.mSize;
    i.mSize = 0;

  }
}


#endif
