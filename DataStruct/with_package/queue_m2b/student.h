#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  T tmp=mData[(mFront+pos)%mCap];
  for (size_t i = mFront+pos; i < mFront+mSize; i++)
  {
    mData[i%mCap]=mData[(i+(size_t)1)%mCap];
  }
  mData[(mFront+mSize-(size_t)1)%mCap]=tmp;
}

#endif
