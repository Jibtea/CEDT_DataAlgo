#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  CP::vector<T> v;
  int index = 0;
  for(size_t i=0 ; i<mSize;i++){
    if(index < pos.size() && i==pos[index]){
      index++;
      continue;
    }
    v.push_back(mData[i]);
  }
  operator=(v);
  return;
}
#endif