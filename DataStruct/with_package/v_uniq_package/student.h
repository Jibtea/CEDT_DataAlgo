#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>
//you can include any other file here
//you are allow to use any data structure


template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::set<T> s;
  CP::vector<T> v;
  for(int i=0;i<mSize;i++){
    if(s.find(mData[i])==s.end()){
      s.insert(mData[i]);
      v.push_back(mData[i]);
    }
  }
  operator=(v);
  return;
}

#endif
