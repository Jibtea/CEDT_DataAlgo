#include <iostream>
#include <vector>

using namespace std;
int n,k;

void gen(vector<int> &sol,int step,int check){
    if(step==n) {
        if(check>=k){
            int count =0;
            for(int &x :sol) {
                cout<<x;
                }
            cout<<endl;}
        //return;
    }
    else{
        sol[step]=0;
        gen(sol,step+1,check);
        sol[step]=1;
        gen(sol,step+1,check+1);
    }

}


int main(){
    cin>>n>>k;
    vector<int> sol(n);
    gen(sol,0,0);
    return 0;
}