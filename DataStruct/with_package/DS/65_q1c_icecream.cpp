//#include <iostream>
//#include <vector>
//#include<utility>
#include <bits/stdc++.h>

using namespace std;


int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,st,a,b,sum=0;
    vector<pair<int,int>> v;
    unordered_set<int> Dday; vector<int> Q_set;
    cin>>n>>m>>st;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        auto gg =make_pair(a,b);
        v.push_back(gg);
    }
    for(int i=0;i<m;i++){
        cin>>a>>b;
        Q_set.push_back(a); Dday.insert(b);
    }
    sort(v.begin(),v.end());
    
    int i=0,j=0,money=0;
    int day=0;
    //auto itr=Dday.begin(); //auto Qitr=Q_set.begin();
    while(j!=m){
        
        if(day!=v[i].first){
            sum+=st;
        }
        else{
            //st=v[i].first;
            cout<<"D: "<<day<<" "<<sum<<endl;
            st=v[i].second;
            sum+=st;
            i++;
        }
        //cout<<" D: "<<day<<"  "<<sum<<endl;
            while(sum>=Q_set[j]&&m!=j){
                //cout<<day<<" ";
                j++;
            }
            
            
        if(Dday.find(day)!=Dday.end()){
            //auto itr =Dday.find(day);
            sum=0;
        }
        day++;
    }
    
    return 0;
}