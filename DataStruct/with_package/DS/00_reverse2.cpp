#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
    vector<int> vv;
    vv=v;
    int aa = distance(v.begin(),a);
    int bb = distance(v.begin(),b)-1;
    //cout<<aa<<" "<<bb<<endl;
    //bb--; 
     b--;
    while(aa<bb){
        swap(*a,*b);
        aa++; bb--;
        a++; b--;
    }
    

}
int main() {
 //read input
 int n,a,b;
 cin >> n;
 vector<int> v;
 for (int i = 0;i < n;i++) {
 int c;
 cin >> c;
 v.push_back(c);
 }
 cin >> a >> b;
 //call function
 reverse(v,v.begin()+a,v.begin()+b+1);
 //display content of the vector
 for (auto &x : v) {
 cout << x << " ";
 }
 cout << endl;
}

/*
6
10 20 30 40 50 60 
1 4 

*/