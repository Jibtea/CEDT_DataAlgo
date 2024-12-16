#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  CP::vector<T> v;
  int a=0;int i=0;
  //auto itr = v.begin();
  sort(data.begin(),data.end());
  //std::cout<<data.size()<<"\n";
  while(i!=data.size()+mSize){
    if(i-a==data[a].first){
      v.push_back(data[a].second);
      a++;
      //std::cout<<"+"<<i<<"+ ";
    }
    else{
      //std::cout<<mData[i-a]<<" ";
      v.push_back(mData[i-a]);
    }
    i++;
  }
  //std:: cout<<"\n";
  operator=(v);
  return;
}

#endif
