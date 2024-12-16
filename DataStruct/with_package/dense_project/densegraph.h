#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
using namespace std;
class DenseGraph{
public:
vector<vector<int>> v;
    DenseGraph() {
        // Your code here
        v.resize(3,vector<int>(3,0));
    }

    DenseGraph(int n_in) {
        // Your code here
        v.resize(n_in,vector<int>(n_in,0));
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        v=G.v;
    }

    void AddEdge(int a, int b) {
        // Your code here
        v[a][b]=1;
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        v[a][b]=0;
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        if(v[a][b]==1) return true;
        else return false;
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph n;
        n.v=v;
        for(int i=0;i<n.v.size();i++){
            for(int j=i+1;j<n.v.size();j++){
                swap(n.v[i][j],n.v[j][i]);
            }
        }
        
        return n;
    }
protected:
    int n;
    // Your code here
};
#endif // __DENSE_GRAPH_H__
