#include "../include/deepCpp_bits/kruskal.hpp"
#include <algorithm>
#include <iostream>

namespace ankitTrilogy
{

    Graph::Graph(int V) : V(V)
    {
        parent = std::vector<int>(V, 0);

        for (int i = 0; i < V; i++)
        {
            parent[i] = i;
        }

        G.clear();
        T.clear();
    }

    void Graph::addWeightedEdge(int u, int v, int w)
    {
        G.push_back(make_pair(w, edge(u, v)));
    }

    int Graph::find_set(int i)
    {

        if (parent[i] == i)
        {
            return i;
        }

        else
        {
            return find_set(parent[i]);
        }
    }

    void Graph::union_set(int u, int v)
    {
        parent[u] = parent[v];
    }

    void Graph::kruskal()
    {

        int i{}, uRep{}, vRep{};
        std::sort(G.begin(), G.end());

        for (int i = 0; i < G.size(); i++)
        {
            uRep = find_set(G[i].second.first);
            vRep = find_set(G[i].second.second);

            if (uRep != vRep)
            {
                T.push_back(G[i]);
                union_set(uRep, vRep);
            }
        }
    }

    void Graph::print()
    {

        std::cout << "Edge - Weight" << std::endl;

        for (int i = 0; i < T.size(); i++)
        {
            std::cout << T[i].second.first << " - " << T[i].second.second << " : " << T[i].first << std::endl;
        }
    }
}