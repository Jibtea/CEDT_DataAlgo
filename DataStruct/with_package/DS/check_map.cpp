#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    for(int i=1;i<=n;i++){
        s.insert(i);
    }

    while (cin>>n)
    {
        //cout<<n;
        if(s.find(n)!=s.end()){
            s.erase(n);
            //cout<<" in"<<endl;
        }
        //else{ cout<<" out"<<endl;}
        
    }

    string ss = (s.empty()) ? "YES": "NO";

    cout<<ss;
    





}
