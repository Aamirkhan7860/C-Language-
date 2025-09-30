#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX = 1000;

vector<int> adj[MAX];     // Adjacency list
bool visited[MAX];       // Visited array

// Function to add edge (undirected)
void addEdge(int u, int v)
 { 
    adj[u].push_back(v);
    adj[v].push_back(u);
 }

// DFS (recursive)
void DFS(int node)
{
    visited[node] = true;
    cout << node << " ";
   for (int neighbor: adj[node])
   {
       if (!visited[neighbor]) 
       DFS(neighbor);
   }
}

// BFS (using queue) 
void BFS(int start) 
{
   queue<int> q;
   visited[start] = true;
   q.push(start);

    while (!q.empty()) 
  {
       int node = q.front();
       q.pop();
       cout << node << " ";

       for (int neighbor: adj[node])
      {
         if (!visited[neighbor]) 
         {
            visited[neighbor] = true;
            q.push(neighbor);
         }
      }
  }
}

// Reset visited array

void resetVisited(int V)
 {
     for (int i = 0; i < V; ++i)
     visited[i] = false;
 }

// Main

int main() 
{
      int V = 6;
      addEdge(0, 1);
      addEdge(0, 2);
      addEdge(1, 3);
      addEdge(1, 4);
      addEdge(2, 5);

      cout << "DFS starting from node 0: ";
      DFS(0);
      cout << endl;

      resetVisited(V);

      cout << "BFS starting from node 0: ";
      BFS(0);
      cout << endl;

      return 0;
}