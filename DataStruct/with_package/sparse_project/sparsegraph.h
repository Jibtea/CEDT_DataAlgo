#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__
#include<set>
#include<algorithm>
#include<iostream>
// Your code here

using namespace std;

class SparseGraph{
public:
set<pair<int,int>> sset;
    SparseGraph() {
        // Your code here
       //v.resize(3,vector<int>(3,0));
    }

    SparseGraph(int n_in) {
        // Your code here
        //v.resize(n_in,vector<int>(n_in,0));
    }

    SparseGraph(const SparseGraph& G) {
        // Your code here
        sset=G.sset;

    }

    void AddEdge(int a, int b) {
        // Your code here
        sset.insert({a,b});
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        auto gg=make_pair(a,b);
        sset.erase(gg);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        auto gg=make_pair(a,b);
        if(sset.find(gg)!=sset.end()) return true;
        else return false;
    }

    SparseGraph Transpose() const {
        // Your code here
        // Your code here
        SparseGraph n,cn;
        n.sset=sset;
        auto iend=sset.end();
        auto i=sset.begin();
        for(i;i!=iend;i++){
            int num1=i->first,num2=i->second;
            auto gg=make_pair(num1,num2);
            n.sset.erase(gg);
            n.sset.insert({num2,num1});
            //cout<<num2<<" "<<num1<<endl;
        }
        
        return n;
    }

protected:
    // Your code here
    //vector<vector<int>> v;
};
#endif // __SPARSE_GRAPH_H__

