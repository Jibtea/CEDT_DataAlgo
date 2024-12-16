#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls)
{
  // write your code here
  for (CP::list<T> &l : ls)
  {
    (--end()).ptr->next = (l.begin()).ptr; // REMOVE LAST
    (l.begin()).ptr->prev = (--end()).ptr; // CONNECT l TO "this"
    mHeader->prev = (--l.end()).ptr; // NEW LAST
    (--l.end()).ptr->next = mHeader; // CONNECT NEW LAST TO HEADER
    
    mSize += l.mSize;
    l.mHeader->next = l.mHeader;
    l.mHeader->prev = l.mHeader;
    l.mSize = 0;
  }
}

#endif