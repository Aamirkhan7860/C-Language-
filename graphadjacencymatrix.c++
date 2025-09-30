#include <iostream>
using namespace std;

const int MAX = 1000;          // Maximum number of vertices
int adjMatrix[MAX][MAX];       // Adjacency matrix initialized to 0

// Function to add an edge to the graph (undirected)
void addEdge(int u, int v) 
{
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;
}

// Function to print the adjacency matrix
void printGraph(int V) 
{
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < V; ++i) 
    {
        for (int j = 0; j < V; ++j) 
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Main function
int main() 
{
    int V = 5;  // Number of vertices
    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);

    printGraph(V);
    return 0;
}
