#include<iostream>
#include<set>

using namespace std;

void f(string s,int b,int a,int count){
    if(s.size()>=b&&count==a) {
      cout<<s<<endl;
      return;  
    }
    if(s.size()>=b) {
      return;  
    }
    if(count==a) f(s+"0",b,a,count);
    else{
        f(s+"0",b,a,count);
        f(s+"1",b,a,count+1);
    }
    
}

int main(){
    int b,a;
    cin>>a>>b;
    set<int> sset;
    string s="";
    f(s,b,a,0);
    return 0;
}