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
 * Repository: https://github.com/Amey-Thakur/ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-AND-ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-LAB
 * Profile: https://github.com/Amey-Thakur
 * =========================================================================================
 *
 * Subject: Artificial Intelligence and Soft Computing (AISC)
 * Program: Implementation of Uninformed Search (Breadth-First Search) using C.
 *
 * Description:
 * This C program implements the Breadth-First Search (BFS) algorithm to traverse a graph.
 * BFS is an uninformed search strategy that explores all neighbor nodes at the present 
 * depth prior to moving on to the nodes at the next depth level.
 * 
 * Algorithm:
 * 1. Initialize result queue and visited list.
 * 2. Mark the starting vertex as visited and enqueue it.
 * 3. Dequeue a vertex from the queue and print it.
 * 4. For each adjacent vertex of the dequeued vertex that has not been visited:
 *    a. Mark it as visited.
 *    b. Enqueue it.
 * 5. Repeat steps 3 and 4 until the queue is empty.
 *
 * Input: 
 * - Number of vertices.
 * - Adjacency matrix representing the graph.
 * - Starting vertex.
 *
 * Output: 
 * - List of reachable nodes from the starting vertex using BFS.
 */

#include<stdio.h>

int a[20][20], q[20], visited[20], n, i, j, f = 0, r = -1;

void bfs(int v);

int main() {
    int v;
    
    // Input number of vertices
    printf("\n Enter the number of vertices: ");
    scanf("%d", &n);
    
    // Input adjacency matrix
    printf("\n Enter graph data in matrix form: \n");
    for(i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Input starting vertex
    printf("\n Enter the starting vertex: ");
    scanf("%d", &v);
    
    // Initialize queue and visited array
    for(i=0; i<n; i++)
    {
        q[i] = 0;
        visited[i] = 0;
    }
    
    // Perform BFS
    bfs(v);
    
    // Display reachable nodes
    printf("\n The node which are reachable are: \n");
    for(i=0; i<n; i++)
    {
        if(visited[i])
        {
            printf("%d\t", i);
        }
    }
    return 0;
}

void bfs(int v)
{
    // Add adjacent unvisited vertices to the queue
    for(i=0; i<n; i++)
    {
        if(a[v][i] && !visited[i])
        {
            q[++r] = i;
        }
    }
    
    // Recursive BFS call if queue is not empty
    if(f <= r) {
        visited[q[f]] = 1;
        bfs(q[f++]);
    }
}
