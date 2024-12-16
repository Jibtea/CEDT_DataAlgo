// Your code here
int max=0;
KeyT sum;
int findh(node *n)
{
    if(n==NULL) {return 0;}
    int hr,hl;
    int dif;
    hr = findh(n->right);
    hl = findh(n->left);
    dif=abs(hr-hl);
    if(max<=dif){
       if(max==dif) 
       sum=std::min(n->data.first,sum);
       else sum=n->data.first;
       max=dif;
    }
    return 1+std::max(findh(n->left),findh(n->right));
}

KeyT getValueOfMostImbalanceNode()
{
    // Your code here
    findh(mRoot);
    return sum;
}
