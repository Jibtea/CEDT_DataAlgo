#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"

template <typename T>
void CP::queue<T>::reverse() {
  // Your code here
  /*
    for (size_t i = 0; i < mSize/2; i++) {
      std::swap(mData[i],mData[mSize-i-1]);
    }
    mFront = 0;*/
    (aux==0)?aux=1:aux=0;
}

template <typename T>
const T& CP::queue<T>::front() const {
  // You MAY need to edit this function
  if(aux==1){
    return mData[(mFront+mSize-1)%mCap];
  }
  else{
    return mData[mFront];
  }
  
}

template <typename T>
const T& CP::queue<T>::back() const {
  // You MAY need to edit this function
  if(aux==1){
    return mData[mFront];
  }
  else return mData[(mFront + mSize - 1) % mCap];
}

template <typename T>
void CP::queue<T>::push(const T& element) {
  // You MAY need to edit this function
  ensureCapacity(mSize + 1);
  if(aux==1){
    if(mFront==0){
      mFront+=mCap;
    }
    mFront--;
    mData[mFront]= element;
  }
  else mData[(mFront + mSize) % mCap] = element;
  mSize++;
}

template <typename T>
void CP::queue<T>::pop() {
  // You MAY need to edit this function
  if(aux==0) mFront = (mFront + 1) % mCap;
  mSize--;
}

#endif