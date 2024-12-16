#include<bits/stdc++.h>

using namespace std;


int main(){
    vector<int> v_n; vector<bool> v_sum(2000000,false); set<int> sum;
    int n,m,a;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a;
        v_n.push_back(a);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j) v_sum[v_n[i]+v_n[j]]=true;//v_sum.push_back(v_n[i]+v_n[j]);//sum.insert(v_n[i]+v_n[j]);
        }
    }

    for(int i=0;i<m;i++){
        cin>>a;
        string result = (v_sum[a]) ? "YES" : "NO";
        cout<<result<<endl;
        
    }






    return 0;
}

/*
    for(int i=0;i<m;i++){
        cin>>a;
        if(sum.find(a)!=sum.end()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

*/