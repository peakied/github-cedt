#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

// you can modify and use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::leaves_count(node* n) {
  size_t count = 0;
  if(n == NULL) return 0;
  if(n->right == NULL && n->left == NULL) return 1;
  else{
    count += leaves_count(n->right);
    count += leaves_count(n->left);
  }
  return count;
}


template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::leaves_count() {
  return leaves_count(mRoot);
  //write your code here
}


#endif
