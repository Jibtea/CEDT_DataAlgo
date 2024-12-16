#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::deep_push(size_t pos, const T &value)
{
  // write your code here
  CP::stack<T> tmp;
  for(size_t i=0;i<pos;i++){
    tmp.push(top());
    pop();
  }
  push(value);
  for(size_t i=0;i<pos;i++){
    push(tmp.top());
    tmp.pop();
  }



}

#endif
