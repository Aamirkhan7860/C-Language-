#include <iostream>
#include <vector>
using namespace std;

const int MAX=1000;         // Maximum number of vertices
vector<int> adj[MAX];      // Array of vectors to represent adjacency list


// Function to add an edge to the graph (undirected)
void addEdge(int u, int v)
 {
      adj[u].push_back(v);
      adj[v].push_back(u);
 }

// Function to print the adjacency list
void printGraph(int V)
 {
       for (int i = 0; i < V; ++i)
     {
         cout << "Adjacency list of vertex " << i <<": head";
        for (int v: adj[i])
          {
             cout << " -> " << v;
          }
        cout << endl;
     }
}

// Main function
int main()
{
    int V = 5;                           // Number of vertices
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