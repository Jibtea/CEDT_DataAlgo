#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include<iostream>
template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    T arr[mSize+((b-a)*2)];  

        for (int i = 0; i <= a; i++){
            arr[i] = mData[i];
            }
        int j=a+1;
        for (int i = a+1; i <= a+b ; i++)
            {
                
                arr[j] = mData[i];
                //std::cout<<arr[j]<<std::endl;
                j++;
                arr[j] = mData[i];
                //std::cout<<arr[j]<<std::endl;
                j++;
            }
        for (int i = a+b+1; i <mSize  ; i++)
            {
                arr[j] = mData[i];
                j++;
            }
        
        
        //////put value
        delete[] mData;
        mData=arr;
        for(int i=0;i<j;i++){
            std::cout<<mData[i]<<std::endl;
        }
        mCap=j;
        mSize=j;
        return;

}

#endif