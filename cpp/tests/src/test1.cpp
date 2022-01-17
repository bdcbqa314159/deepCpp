#include <deepCpp>
#include <iostream>

using namespace ankitTrilogy;
void KruskalTester()
{
    ankitTrilogy::Graph g(6);
    // g.AddWeightedEdge(0, 1, 4);
    // g.AddWeightedEdge(0, 2, 4);
    // g.AddWeightedEdge(1, 2, 2);
    // g.AddWeightedEdge(1, 0, 4);
    // g.AddWeightedEdge(2, 0, 4);
    // g.AddWeightedEdge(2, 1, 2);
    // g.AddWeightedEdge(2, 3, 3);
    // g.AddWeightedEdge(2, 5, 2);
    // g.AddWeightedEdge(2, 4, 4);
    // g.AddWeightedEdge(3, 2, 3);
    // g.AddWeightedEdge(3, 4, 3);
    // g.AddWeightedEdge(4, 2, 4);
    // g.AddWeightedEdge(4, 3, 3);
    // g.AddWeightedEdge(5, 2, 2);
    // g.AddWeightedEdge(5, 4, 3);
    g.addWeightedEdge(0, 1, 9);
    g.addWeightedEdge(0, 2, 5);
    g.addWeightedEdge(0, 4, 11);
    g.addWeightedEdge(1, 2, 10);
    g.addWeightedEdge(1, 3, 12);
    g.addWeightedEdge(3, 4, 3);
    g.addWeightedEdge(3, 2, 7);
    g.addWeightedEdge(4, 2, 6);
    g.kruskal();
    g.print();
}

void PrimsTester()
{
    // create the graph given in above fugure
    int V = 5;
    ankitTrilogy::Prim::Graph g(V);

    //  making above shown graph
    g.addEdge(0, 1, 4);
    g.addEdge(0, 2, 8);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 6);
    g.addEdge(2, 3, 3);
    g.addEdge(2, 4, 9);
    g.addEdge(3, 4, 5);
    g.primMST();
    g.print();
}

int main()
{
    std::cout << "Testing tests.cpp" << std::endl;
    KruskalTester();
    PrimsTester();
}