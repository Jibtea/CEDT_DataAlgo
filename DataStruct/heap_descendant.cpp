#include<vector>
#include<set>
#include<iostream>
int n,m;
using namespace std;
set<int> sset;
void f(int x){
    if((x*2)+1<n) {sset.insert((x*2)+1); f((x*2)+1);}
    if((x*2)+2<n){sset.insert((x*2)+2); f((x*2)+2);}
    return;
}
//ลูกมันไม่มีสิทธิ
int main(){
    std::ios_base::sync_with_stdio(false);std::cin.tie(0);
    
    cin>>n>>m;
    sset.insert(m);
    f(m);
    cout<<sset.size()<<endl;
    for(auto x:sset){
        cout<<x<<" ";
    }
    return 0;
}