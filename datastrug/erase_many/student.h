#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  T *arr = new T[mSize-pos.size()]();
  size_t co=0,c=0;
  size_t n=pos.size();
  for(size_t i=0;i<mSize;i++){
    if(co >=n || i != pos[co]){
      
      arr[c] = mData[i];
      c++;
      continue;
    }
    co++;
  }
  delete [] mData;
  mData = arr;
  mSize = mSize-co;
  mCap = mSize;
}

#endif