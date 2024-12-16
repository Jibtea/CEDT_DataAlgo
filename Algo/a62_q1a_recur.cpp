#include <bits/stdc++.h>

using namespace std;

void recur(vector<vector<int>> &v, int a, int b,int
top,int bottom,int left,int right){
    if(a==0){
        v[top][left]=b;
        return;
    }
    recur(v,a-1,b,top,(top+bottom)/2,left,(right+left)/2);
    recur(v,a-1,b-1,top,(top+bottom)/2,((right+left+1)/2),right);
    recur(v,a-1,b+1,((top+bottom+1)/2),bottom,left,(right+left)/2);
    recur(v,a-1,b,((top+bottom+1)/2),bottom,((right+left+1)/2),right);
 
}

int main(){
    int a,b;
    cin>>a>>b;
    int SIZE=pow(2,a);
    vector<vector<int>> v(SIZE,vector<int> (SIZE,0));
    recur(v,a,b,0,SIZE,0,SIZE);
    //cout<<"ji";
    for(auto& x:v){
        for(auto& y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}