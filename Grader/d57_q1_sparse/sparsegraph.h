#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here

#include<bits/stdc++.h>
using namespace std;

class SparseGraph{
public:
    vector<set<int>> edge;
    SparseGraph(): SparseGraph(3) {
    }
    SparseGraph(int n_in): edge(n_in), edge_t(n_in) {
    }
    SparseGraph(const SparseGraph& G): edge(G.edge), edge_t(G.edge_t) {}

    void AddEdge(int a, int b) {
        edge[a].insert(b);
        edge_t[b].insert(a);
    }

    void RemoveEdge(int a, int b) {
        if(DoesEdgeExist(a,b)) edge[a].erase(b), edge_t[b].erase(a);
    }

    bool DoesEdgeExist(int a, int b) const {
        return edge[a].count(b)!=0;
    }

    SparseGraph Transpose() const {
        SparseGraph s = SparseGraph();
        s.edge=vector<set<int>>(edge_t.begin(), edge_t.end());
        s.edge_t=vector<set<int>>(edge.begin(), edge.end());

        return s;
    }

protected:
    vector<set<int>> edge_t;
};
#endif // __SPARSE_GRAPH_H__


