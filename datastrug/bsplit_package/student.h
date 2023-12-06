#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node *point = mRoot, *subroot = mRoot;
  while(true){
    if(point->data.first < val){
      if(point->right == NULL){
        child_link(subroot, point->data.first) = point;
        point->parent = subroot;
        return result;
      }
      if(point != mRoot){
        child_link(subroot, point->data.first) = point;
        point->parent = subroot;
      }
      subroot = point;
      point = point->right;
      subroot->right = NULL;
      point->parent = NULL;
    }else{
      if(result.mRoot == NULL){
          result.mRoot = point;
        if(point->left == NULL){
          if(subroot == mRoot) mRoot = NULL;
          return result;
        }
        point = point->left;
        if(result.mRoot->parent != NULL){
          point->parent = result.mRoot->parent;
          result.mRoot->parent->right = point;
        }else point->parent = NULL;
        result.mRoot->parent = NULL;
        result.mRoot->left = NULL;
      }else{
        if(point == NULL) return result;
        result.mRoot->left = point;
        point->parent = result.mRoot;
        result.mRoot = point;
        point = point->left;
        result.mRoot->left = NULL;
        point->parent = NULL;
      }
    }
  }
  return result;
}

#endif
