#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  //write something here
  //
  // you need to return something
  // return 
  if(idx<0){
    return mData[(mFront+(mSize+idx))%mCap];
  }
  else{
    return mData[(mFront+(size_t)idx)%mCap];
  }
  

}

#endif
