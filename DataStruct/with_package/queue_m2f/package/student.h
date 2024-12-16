#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    //T tmp = mData[(mFront+pos)%mCap];
    while(pos){
        std::swap(mData[(mFront+pos)%mCap],mData[(mFront+pos-1)%mCap]);
        pos--;
    }

    //mData[mFront]=tmp;
}

#endif
