#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything 
  //2*i+1 left son 2*i+2 right son
  int m = std::min(mSize,(size_t)7);
  std::vector<T> v;
  for(int i=0;i<m;i++){
    v.push_back(mData[i]);
  }
  std::sort(v.begin(),v.end(),mLess);

  return *(v.end()-k);

}

#endif
