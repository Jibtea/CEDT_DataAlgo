#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

// you can modify and use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::leaves_count(node* n) {
  size_t count=0;
  if(n!=NULL){
  if(n->left==NULL&&n->right==NULL) return 1;
  count+=leaves_count(n->left); count+=leaves_count(n->right);
  //else if return leaves_count(n->right);
  return count;
  }
  else {return 0;}
}


template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::leaves_count() {
  return leaves_count(mRoot);
  //write your code here
}


#endif
