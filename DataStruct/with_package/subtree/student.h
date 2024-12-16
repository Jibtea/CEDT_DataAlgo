#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //write your code here
  if(n==NULL) return 0;
  return 1+process(n->left)+process(n->right);
  
  return 0;
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  //node* nl=mRoot->left; node* nr=mRoot->right;
  if(mSize==0) return std::pair<KeyT,MappedT>();
  left.mRoot=left.copy(mRoot->left,left.mRoot); 
  right.mRoot=right.copy(mRoot->right,right.mRoot);
  left.mSize=process(mRoot->left); right.mSize=mSize-left.mSize-1;
  std::pair<KeyT,MappedT> tmp = mRoot->data;
  clear(); //mRoot=tmp; mSize=1;
  insert(tmp);
  

  return std::pair<KeyT,MappedT>(tmp);
}

#endif

