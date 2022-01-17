#ifndef KRUSKAL_H
#define KRUSKAL_H

#include <vector>
typedef std::pair<int, int> edge;

namespace ankitTrilogy
{
    class Graph
    {
        std::vector<std::pair<int, edge>> G;
        std::vector<std::pair<int, edge>> T;
        std::vector<int> parent;
        int V;

    public:
        Graph(int V);
        void addWeightedEdge(int u, int v, int w);
        int find_set(int i);
        void union_set(int u, int v);
        void kruskal();
        void print();
    };
}

#endif
