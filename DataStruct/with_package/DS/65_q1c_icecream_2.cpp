#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,st;
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    vector<int> q(1000003),p(1000003);
    cin>>n>>m>>st;
    while(n--){
        int a,b;
        cin>>a>>b;
        q[a]=b;
    }
    q[0]=st;

    for(int j=1;j<1000000;++j){
        q[j]=(st=q[j]?:st)+q[j-1];
        //cout<<q[j]<<" ";
    }
    //cout<<" "<<endl;
    while(m--){
        int P,X;
        cin>>P>>X;
        auto itr = q.begin();
        if(q[X]>=P){
            itr=lower_bound(q.begin(),q.begin()+X+1,P);
        }
        else{
            itr=lower_bound(q.begin()+X,q.end(),P+q[X]);
        }
        cout<<distance(q.begin(),itr)<<" ";
    }
    return 0;
}