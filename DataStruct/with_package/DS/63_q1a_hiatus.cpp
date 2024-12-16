//#include <iostream>
//#include <vector>
//#include<utility>
#include <bits/stdc++.h>

using namespace std;
set<pair<int,int>> s;
int main(){
    vector<pair<int,int>> v;
    
    int n,m,a,b;    
    scanf("%d", &n); scanf("%d", &m);
    //printf("Number = %d", n); printf("Number = %d", m);
    for(int i=0;i<n;i++){
        cin>>a>>b;
        auto gg=make_pair(a,b);
        //v.push_back(gg);
        s.insert(gg);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        cin>>a>>b;
        auto gg=make_pair(a,b);
        auto itr= s.lower_bound(gg);

        if(*itr==gg){cout<<"0 0 ";}
        else if(itr==s.begin())cout<<"-1 -1 ";
        else {
            itr--;
            cout<<(*itr).first<<" "<<(*itr).second<<" ";
        }   
    }
    return 0;
}