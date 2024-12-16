#include<vector>
#include<set>
#include<iostream>

using namespace std;
set<int> sset;
void f(int x){
    if(sset.find((x*2)+1)!=sset.end()){
        sset.erase((x*2)+1);
        f((x*2)+1);
    }
    if(sset.find((x*2)+2)!=sset.end()){
        sset.erase((x*2)+2);
        f((x*2)+2);
    }
}
//ลูกมันไม่มีสิทธิ
int main(){
    std::ios_base::sync_with_stdio(false);std::cin.tie(0);
    int n,m;
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        sset.insert(i);
    }
    sset.erase(m);
    f(m);
    cout<<sset.size()<<endl;
    for(auto x:sset){
        cout<<x<<" ";
    }
    return 0;
}