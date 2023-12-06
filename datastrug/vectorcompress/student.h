#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector.h"
template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    T *arr = new T[mSize]();
    for(int i = 0; i < mSize;i++){
        arr[i] = mData[i];
    }
    delete[] mData;
    mCap = mSize;
    mData = arr;
}

#endif
