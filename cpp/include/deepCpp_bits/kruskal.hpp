#ifndef KRUSKAL_H
#define KRUSKAL_H

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define edge pair<int, int>

class Graph
{
private:
    vector<pair<int, edge>> G; // graph
    vector<pair<int, edge>> T; // mst
    vector<int> parent;
    int V; // number of vertices/nodes in graph
public:
    Graph(int V);
    void AddWeightedEdge(int u, int v, int w);
    int find_set(int i);
    void union_set(int u, int v);
    void kruskal();
    void print();
};

#endif
