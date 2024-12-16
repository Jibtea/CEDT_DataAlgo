#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <iostream>


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  //std::cout<<last-first<<"\n";
  auto i = position;
  while (first!=last){
    i=insert(i,*first);
    first++;
    i++;
    //std::cout<<i<<" ";
  }
  
}

#endif
