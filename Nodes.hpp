class Nodes
{
    private:
        int nodeNum;
        int** edges;
        int amtOfEdges;

    public:
        Nodes(int nodeNum, int** edges, int amtOfEdges);
        void display();
        int** getEdges();
        int getAmtOfEdges();
        int getNodeNum();
};  