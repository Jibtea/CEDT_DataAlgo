#include<iostream>
#include<list>

using namespace std;


int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,k,v,a; bool check=false;
    cin>>n>>k>>v;
    list<int> l;

    while(n--){
        cin>>a;
        l.push_back(a);
    }

    auto itr= next(l.begin(),k);
    l.insert(itr,v);
    //cout<<*--itr;
    itr--;
    int j=0;
    ////check
    while (!check){
        auto itstart = l.begin(),itstop = l.begin();
        for(auto i = itr;i!=l.end()&&*i==*itr;i--){
            j++;
            itstart=i;
            //cout<<*i;
        }
        for(auto i = itr;i!=l.end()&&*i==*itr&&i!=l.end();i++){
            j++;
            itstop=i;
            //cout<<*i;
        }
        if(j>3) {
            
            itstop=next(itstop,1);
            
            itstart=l.erase(itstart,itstop);
            //cout<<" :"<<*itstart;
            itr=--itstart;
            j=0;
        }
        else{
            check=true;
        }

    }

    
    //////cout
    for(auto x: l){
        cout<<x<<" ";
    }




    return 0;
}