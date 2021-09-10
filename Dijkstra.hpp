#include "Nodes.hpp"
#include <vector>

using namespace std;
class Dijkstra
{
    private:
        Nodes** nodes;
        int amtOfNodes;
        int* visited;
        int weight;
        int visitedCount;

    public: 
        Dijkstra(int amtOfNodes, Nodes** nodes);
        int shortestPathCost(int startingNodePos, int endingNodePos);
        void display();
        void resetVisitedList();
};