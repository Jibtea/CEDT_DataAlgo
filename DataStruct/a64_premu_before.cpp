#include <iostream>
#include <vector>
#include <map>

using namespace std;
int n,m;
map<int,int> mmap;
void f(vector<int> &sol,int step,vector<bool> &used){
    if(step==n){
        for(auto x:sol) cout<<x<<" ";
        cout<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            if(mmap.find(i)!=mmap.end()){
            if(used[i]==false&&used[mmap[i]]==true){
                used[i]=true;
                sol[step] = i;
                f(sol,step+1,used);
                used[i]=false;
            }
            }
            else{
               if(used[i]==false){
                used[i]=true;
                sol[step] = i;
                f(sol,step+1,used);
                used[i]=false;
            } 
            }
            
        }
    }
}

int main(){
    int mm,mmm;
    cin>>n>>m;
    while(m--){
        cin>>mm>>mmm;
        mmap[mmm]=mm;
    }
    vector<int> sol(n);
    vector<bool> used(n*n);
    f(sol,0,used);
    return 0;
}