#include "Nodes.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

Nodes::Nodes(int nodeNum, int** edges, int amtOfEdges)
{
    this->nodeNum = nodeNum;
    this->edges = edges;
    this->amtOfEdges = amtOfEdges;
}



void Nodes::display()
{
    cout << "Node " << this->nodeNum << " makes an edge with " << endl;
    for(int i = 0; i < this->amtOfEdges; i++)
    {
        cout << "   Node " << this->edges[i][0] << " with edge weight: " << this->edges[i][1] << endl;
    }
    
    cout << "\n" << endl;
}

int** Nodes::getEdges()
{
    return this->edges;
}

int Nodes::getAmtOfEdges()
{
    return this->amtOfEdges;
}

int Nodes::getNodeNum()
{
    return this->nodeNum;
}