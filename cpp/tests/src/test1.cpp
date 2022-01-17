#include <deepCpp>
#include <iostream>

void KruskalTester()
{
    Graph g(6);
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
    g.AddWeightedEdge(0, 1, 9);
    g.AddWeightedEdge(0, 2, 5);
    g.AddWeightedEdge(0, 4, 11);
    g.AddWeightedEdge(1, 2, 10);
    g.AddWeightedEdge(1, 3, 12);
    g.AddWeightedEdge(3, 4, 3);
    g.AddWeightedEdge(3, 2, 7);
    g.AddWeightedEdge(4, 2, 6);
    g.kruskal();
    g.print();
}

int main()
{
    std::cout << "Testing tests.cpp" << std::endl;
    KruskalTester();
}