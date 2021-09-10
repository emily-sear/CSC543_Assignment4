#include "Dijkstra.hpp"
#include <bits/stdc++.h>
#include <stdlib.h>


using namespace std;


int main()
{
    int **edges = new int*[2];
    for(int i = 0; i < 2; i++)
    {
        edges[i] = new int[2];
    }
    edges[0][0] = 1;
    edges[0][1] = 10;
    edges[1][0] = 4;
    edges[1][1] = 20;

    Nodes* nodeZero = new Nodes(0, edges, 2);
    
    int **edges5 = new int*[2];
    for(int i = 0; i < 2; i++)
    {
        edges5[i] = new int[2];
    }
    edges5[0][0] = 1;
    edges5[0][1] = 30;
    edges5[1][0] = 3;
    edges5[1][1] = 60;

    Nodes* nodeTwo = new Nodes(2, edges5, 2);
    
    int **edges2 = new int*[3];
    for(int j = 0; j < 3; j++)
    {
        edges2[j] = new int[2];
    }
    edges2[0][0] = 1;
    edges2[0][1] = 40;
    edges2[1][0] = 2;
    edges2[1][1] = 60;
    edges2[2][0] = 4;
    edges2[2][1] = 70;

    Nodes* nodeThree = new Nodes(3, edges2, 3);

    int **edges6 = new int*[3];
    for(int i = 0; i < 3; i++)
    {
        edges6[i] = new int[2];
    }
    edges6[0][0] = 0;
    edges6[0][1] = 20;
    edges6[1][0] = 1;
    edges6[1][1] = 50;
    edges6[2][0] = 3;
    edges6[2][1] = 70;

    Nodes* nodeFour = new Nodes(4, edges6, 3);

    int **edges3 = new int*[4];
    for(int k = 0; k < 4; k++)
    {
        edges3[k] = new int[2];
    }
    edges3[0][0] = 0;
    edges3[0][1] = 10;
    edges3[1][0] = 2;
    edges3[1][1] = 30;
    edges3[2][0] = 3;
    edges3[2][1] = 40;
    edges3[3][0] = 4;
    edges3[3][1] = 50;

    Nodes* nodeOne = new Nodes(1, edges3, 4);

    Nodes* listOfNodes[5] = {nodeZero, nodeOne, nodeTwo, nodeThree, nodeFour};

    
    Dijkstra* theAlgorithm = new Dijkstra(5, listOfNodes);
    cout << theAlgorithm->shortestPathCost(0, 2) << endl;
}