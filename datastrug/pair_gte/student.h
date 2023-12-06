#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T1,typename T2>
bool CP::pair<T1,T2>::operator>=(const pair<T1,T2>& other) const {
  if(first == other.first){
    if(second == other.second || second > other.second){
      return true;
    }
  }
  if(first > other.first){
    return true;
  }
  return false;
}

#endif