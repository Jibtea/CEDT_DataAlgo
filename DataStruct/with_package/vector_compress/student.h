#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    if(mCap!=mSize){
        //mData=mSize;
        mCap=mSize;
        for(int i=0;i<mSize;i++){
            mData[i];
        } 
        T * CopyData = new T[mSize]();
        for (size_t i = 0;i < mSize;i++) {
        CopyData[i] = mData[i];
        }

        delete [] mData;

        mData = CopyData;
        
      }
    }

#endif
