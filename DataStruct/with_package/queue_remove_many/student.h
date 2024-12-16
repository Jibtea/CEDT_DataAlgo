#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  T *arr = new T[mSize-pos.size()]();
  size_t j=0;
      for (size_t i = 0; i < mSize; i++)
      {
        if(==pos.end()){
          arr[j] = mData[(mFront + i) % mCap];
          j++;
        }
      }
      delete[] mData;
      mData = arr;
      mSize-=pos.size();
      mCap = j;
      mFront = 0;
}

#endif
