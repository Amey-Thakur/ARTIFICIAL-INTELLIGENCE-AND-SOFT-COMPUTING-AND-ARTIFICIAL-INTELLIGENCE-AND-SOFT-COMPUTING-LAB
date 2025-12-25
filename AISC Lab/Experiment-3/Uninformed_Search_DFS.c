/*
 * =========================================================================================
 * Terna Engineering College
 * Computer Engineering Department
 *
 * EXPERIMENT NO. 03
 *
 * Name: Amey Mahendra Thakur    Roll No: 50
 * Class: BE-COMPS-B             Batch: B3
 * Date: 10-08-2021
 *
 * Repository:
 * https://github.com/Amey-Thakur/ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-AND-ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-LAB
 * Profile: https://github.com/Amey-Thakur
 * =========================================================================================
 *
 * Subject: Artificial Intelligence and Soft Computing (AISC)
 * Program: Implementation of Uninformed Search (Depth-First Search) using C.
 *
 * Description:
 * This C program implements the Depth-First Search (DFS) algorithm to traverse
 * a graph. DFS is an uniformed search algorithm that explores as far as
 * possible along each branch before backtracking. It uses a stack-based
 * approach (or recursion) to manage the traversal.
 *
 * Algorithm:
 * 1. Mark the current node as visited.
 * 2. Print the current node.
 * 3. Traverse all the adjacent and unmarked nodes by recursively calling the
 * DFS function.
 * 4. Backtrack when no unvisited adjacent nodes are available.
 *
 * Input:
 * - Number of edges and vertices.
 * - Edges specifying the graph connections (V1 V2).
 * - Source vertex to start the traversal.
 *
 * Output:
 * - DFS traversal path starting from the source vertex.
 */

#include <stdio.h>
#include <stdlib.h>

int source, V, E, time, visited[20], G[20][20];

void DFS(int i) {
  int j;
  visited[i] = 1;
  printf(" %d->", i + 1);
  for (j = 0; j < V; j++) {
    if (G[i][j] == 1 && visited[j] == 0)
      DFS(j);
  }
}

int main() {
  int i, j, v1, v2;
  printf("\t\t\tGraphs\n");

  // Input number of edges and vertices
  printf("Enter the no of edges: ");
  scanf("%d", &E);
  printf("Enter the no of vertices: ");
  scanf("%d", &V);

  // Initialize Adjacency Matrix
  for (i = 0; i < V; i++) {
    for (j = 0; j < V; j++)
      G[i][j] = 0;
  }

  // Input Edges
  for (i = 0; i < E; i++) {
    printf("Enter the edges (format: V1 V2) : ");
    scanf("%d%d", &v1, &v2);
    G[v1 - 1][v2 - 1] = 1; // Assuming 1-based indexing for input
  }

  // Display Adjacency Matrix
  for (i = 0; i < V; i++) {
    for (j = 0; j < V; j++)
      printf(" %d ", G[i][j]);
    printf("\n");
  }

  // Input Source Vertex
  printf("Enter the source: ");
  scanf("%d", &source);

  // Perform DFS
  DFS(source - 1); // Adjusting for 0-based indexing

  return 0;
}