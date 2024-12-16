#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node *it=mRoot,*temp,*now;
  //std::cout<<" : "<<mLess(it->data.first,val);
  while(it!=NULL){
    ///checkว่าค่าน้อยอ้ะยาง
    if(mLess(it->data.first,val)){
      it=it->right;
    }
    else{
      //gogo left child เพื่อเปลี่ยนitนั้นเป็นmroot result
      temp=it->left;
      //เอาnodeบนหัวเป็นrootแล้วdataเป็นลูก
      child_link(it->parent,it->data.first)=temp;
      
      //ลาก่แยลูกซ้าย cuz it->left=NULL==temp
      if(temp!=NULL){
        it->left=NULL;
        temp->parent=it->parent;
      }
      //เปลี่ยนmRoot.resultซะ
      if(result.mRoot==NULL){
        result.mRoot=it;
        result.mRoot->parent=NULL;
      }
      //วนมารอบสองเลยเปลี่ยนค่าดักออกloop
      else{
        now->left=it;
        it->parent=now;
      }
      now=it;
      it=temp;
    }
  }
   return result; 
 
}

#endif
