#include "../include/deepCpp_bits/graphs.hpp"

namespace ankitTrilogy
{

    void printDFS(std::vector<std::vector<int>> &graph, int vertex, std::vector<bool> &visited)
    {

        int n = graph.size();
        visited[vertex] = true;
        std::cout << vertex << std::endl;

        for (int i = 0; i < n; i++)
        {

            if (graph[vertex][i] && !visited[i])
            {
                printDFS(graph, i, visited);
            }
        }
    }

    void DFS(std::vector<std::vector<int>> &graph)
    {

        int n = graph.size();
        std::vector<bool> visited(n, 0);
        int countConnections = 0;

        for (int i = 0; i < n; i++)
        {
            if (visited[i] == false)
            {
                printDFS(graph, i, visited);
                countConnections++;
            }
        }

        std::cout << "No. of connected components: " << countConnections << std::endl;
    }

    void printBFS(std::vector<std::vector<int>> &graph, int vertex, std::vector<bool> &visited)
    {

        int n = graph.size();
        std::queue<int> q;
        q.push(vertex);
        visited[vertex] = true;

        while (!q.empty())
        {

            int tempVertex = q.front();
            q.pop();

            std::cout << tempVertex << std::endl;

            for (int i = 0; i < n; i++)
            {
                if (graph[tempVertex][i] && !visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }

    void BFS(std::vector<std::vector<int>> &graph)
    {

        int n = graph.size();
        std::vector<bool> visited(n, 0);
        int noConnections = 0;

        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                printBFS(graph, i, visited);
                noConnections++;
            }
        }
        std::cout << "No. of connected components " << noConnections << std::endl;
    }
}