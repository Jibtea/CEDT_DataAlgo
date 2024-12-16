#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    map<string,int> vote;
    int n,k,a; string s;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>s;
        vote[s]++;
    }
    priority_queue<pair<int,string>> pq;

    for(auto x:vote){
        pq.push({x.second,x.first});
    }

    int count =0,num_vote =-1; 
    while(!pq.empty()&&count<k){
        count++;
        num_vote=pq.top().first;
        pq.pop();
        }
    cout<<num_vote;

    
    return 0;
}