#include<bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); 
    int n,M; map<long long int,long long int> m; 
    long long int s,ss,s_f1,s_f2;
    cin>>n>>M;
    for(int i=0;i<n;i++){
        cin>>s>>ss;
        m[ss]=s; //ลูก พ่อ
    }
    bool check=false;
    
    for(int i=0;i<M;i++){
        cin>>s>>ss;
        if(m[m[s]]==0||m[m[ss]]==0||s==ss||m[m[s]]!=m[m[ss]])
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    //cout<<m.size();
    return 0;
}

/*
for(int i=0;i<M;i++){
        cin>>s>>ss;
        s_f1="A"; s_f2="B";
        bool c_f1= (m.find(s)!=m.end())? true : false;
        bool c_f2= (m.find(ss)!=m.end())? true : false;
        bool c_gf1= (m.find(m[s])!=m.end())? true : false;
        bool c_gf2= (m.find(m[ss])!=m.end())? true : false;
        bool cc =(c_f1&&c_f2&&c_gf1&&c_gf2);//&&(m[s]!=m[ss]);
        bool ccc=(s!=m[ss]&&ss!=m[s]);
        if(s!=ss&&ccc){
            s_f1=m[m[s]]; s_f2=m[m[ss]];
            //cout<<s<<" "<<m[s]<<" "<<s_f1<<":"<<ss<<" "<<m[ss]<<" "<<s_f2<<endl;
        }
        
        string kiki = (s_f1==s_f2) ? "YES":"NO";
        cout<<kiki<<endl;
        c_f1=false; c_gf1=false; c_f2=false; c_gf2=false;
    }
 */

