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
        int kk=k-1,i=1;
        while(kk--){
            sol[step+i]=1;
            i++;
            
        }
        gen(sol,step+i,check+i);
        
    }

}


int main(){
    cin>>n>>k;
    vector<int> sol(n);
    gen(sol,0,0);
    return 0;
}