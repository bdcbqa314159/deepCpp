#include <iostream>
#include <vector>
#include <queue>

namespace ankitTrilogy
{

    void printDFS(std::vector<std::vector<int>> &graph, int vertex, std::vector<bool> &visited);

    void DFS(std::vector<std::vector<int>> &graph);

    void printBFS(std::vector<std::vector<int>> &graph, int vertex, std::vector<bool> &visited);

    void BFS(std::vector<std::vector<int>> &graph);
}