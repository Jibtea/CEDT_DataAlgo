#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int n,m,k,a;
    vector<int> v;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

////upper_bound itrน้อยสุดของค่านั้น lower_bounditrมากสุดของค่านั้น
    
    while(m!=0){
        cin>>a;
        auto l_itr=lower_bound(v.begin(),v.end(),a-k);
        auto u_itr=upper_bound(v.begin(),v.end(),a+k);
        cout<<distance(l_itr,u_itr)<<" ";
        m--;
    }



}
