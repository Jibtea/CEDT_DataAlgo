#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <vector>

using namespace std;

template <typename T,typename Comp>

size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  //if(pos==0) return (size_t)0;
  size_t count=0;
  for(size_t i=0;i<mSize;i++){
    //if(mData[i]>mData[pos]){ count++;}
    if(mLess(mData[pos],mData[i])) count++;
  }

  return count;
}

#endif
