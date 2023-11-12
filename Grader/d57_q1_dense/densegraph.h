#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
using namespace std;
class DenseGraph{
public:
    DenseGraph(): DenseGraph(3) {
    }

    DenseGraph(int n_in): n(n_in), mat(n_in, vector<bool>(n_in))  {
    }

    DenseGraph(const DenseGraph& G): n(G.n), mat(G.mat) {
    }

    void AddEdge(int a, int b) {
        mat[a][b] = 1;
    }

    void RemoveEdge(int a, int b) {
        mat[a][b] = 0;
    }

    bool DoesEdgeExist(int a, int b) const {
        return mat[a][b];
    }

    DenseGraph Transpose() const {
        auto x = DenseGraph(n);
        for(int i=0; i<n; i++) for(int j=0; j<n; j++) if(mat[i][j]) x.AddEdge(j, i);
        return x;

    }

protected:
    int n;
    vector<vector<bool>> mat;
};
#endif // __DENSE_GRAPH_H__
