#include "Dijkstra.hpp"
#include <limits>
#include <iostream>

Dijkstra::Dijkstra(int amtOfNodes, Nodes** nodes)
{
    this->nodes = nodes;
    this->amtOfNodes = amtOfNodes;
    this->visited = new int[amtOfNodes];
    for(int i = 0; i < amtOfNodes; i++)
    {
        this->visited[i] = -1;
    }
    this->weight = 0; 
    this->visitedCount = 0; 
}


int Dijkstra::shortestPathCost(int startingNodePos, int endingNodePos)
{
    if(endingNodePos == startingNodePos)
    {
        return this->weight;
    }
    Nodes* startingNode = this->nodes[startingNodePos];
    int shortestLength = 0; 
    Nodes* shortestNode = NULL;

    for(int i = 0; i < startingNode->getAmtOfEdges(); i++)
    {
        if(i == 0)
        {   
            bool visitedTest = false;
            for(int j = 0; j < visitedCount; j++)
            {
                if(visited[j] == startingNode->getEdges()[i][0])
                {
                    visitedTest = true;
                }
            }
            if(!visitedTest)
            {
                shortestLength = startingNode->getEdges()[i][1];
                shortestNode = this->nodes[startingNode->getEdges()[i][0]];
            }
        
        }
        else if ((startingNode->getEdges()[i][1] < shortestLength) || (shortestLength == 0))
        {
            bool visitedTest = false;
            for(int j = 0; j < (visitedCount + 1); j++)
            {
                if(visited[j] == startingNode->getEdges()[i][0])
                {
                    visitedTest = true;
                }
            }
            if(!visitedTest)
            {
                shortestLength = startingNode->getEdges()[i][1];
                shortestNode = this->nodes[startingNode->getEdges()[i][0]];
            }
        }

    }
    this->weight += shortestLength;
    visited[visitedCount] = startingNodePos;
    visitedCount++;
    shortestPathCost(shortestNode->getNodeNum(), endingNodePos);
}

void Dijkstra::display()
{
}

void Dijkstra::resetVisitedList()
{
    this->visited = new int[amtOfNodes];
    for(int i = 0; i < amtOfNodes; i++)
    {
        this->visited[i] = -1;
    }
}