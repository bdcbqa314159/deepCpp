#include <deepCpp>
#include <iostream>
#include <string>
#include <vector>

void test()
{
    message();
}

void graphTester()
{

    using namespace ankitTrilogy;
    std::cout << "Working with graphs :)." << std::endl;

    // std::cout << "=== Dealing with inputs ===" << std::endl;

    // int n, e;

    // std::cin >> n >> e;
    // std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));

    // for (int i = 1; i <= e; i++)
    // {
    //     int fv, sv;
    //     std::cin >> fv >> sv;
    //     matrix[fv][sv] = 1;
    //     matrix[sv][fv] = 1;
    // }

    // Hardcoding graph
    int n = 7;
    int e = 4;
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));
    matrix[0][1] = 1;
    matrix[1][0] = 1;
    matrix[0][4] = 1;
    matrix[4][0] = 1;
    matrix[1][4] = 1;
    matrix[4][1] = 1;
    matrix[2][5] = 1;
    matrix[5][2] = 1;

    std::cout << "DFS" << std::endl;
    DFS(matrix);
    std::cout << "BFS" << std::endl;
    BFS(matrix);
}

int main()
{

    test();
    graphTester();
    return 0;
}