#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* ptr) const {
  if(!ptr) return 0;
  return (ptr->left == NULL)? ((ptr->right == NULL)? 0 : process(ptr->right)+1) : ((ptr->right == NULL)? 1+process(ptr->left) : process(ptr->right)+process(ptr->left));
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::count_unary() const {
  return process(mRoot);
}

#endif
