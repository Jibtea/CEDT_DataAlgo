#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<iostream>

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if(a>b){
    std::swap(a,b);
  }
  if(m<=0||b==a||a<begin()||b<begin()||a>=end()||b>=end()||a+m-1>=end()||b+m-1>=end()||a+m-1>=b){
    return false;
  }
  else{
    for(int i=0;i<m;i++){
      std::swap(*a++,*b++);
    }
    return true;
  }

}

#endif
