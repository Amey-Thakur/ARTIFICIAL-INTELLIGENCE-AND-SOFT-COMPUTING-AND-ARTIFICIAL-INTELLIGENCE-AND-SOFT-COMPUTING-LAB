'''
=========================================================================================
Terna Engineering College
Computer Engineering Department

EXPERIMENT NO. 04

Name: Amey Mahendra Thakur    Roll No: 50
Class: BE-COMPS-B             Batch: B3
Date: 20-08-2021

Repository: https://github.com/Amey-Thakur/ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-AND-ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-LAB
Profile: https://github.com/Amey-Thakur
=========================================================================================

Subject: Artificial Intelligence and Soft Computing (AISC)
Program: Implementation of Informed Search (A* Algorithm) using Python.

Description:
This Python program implements the A* (A-Star) search algorithm.
A* is a best-first search algorithm that is widely used in pathfinding and graph traversal.
It finds the shortest path by using a heuristic function to estimate the cost from the 
current node to the goal, combining the actual cost from the start node (g(n)) and the 
estimated cost to the goal (h(n)).

Equation: f(n) = g(n) + h(n)
where:
- f(n) is the total estimated cost of the path through node n.
- g(n) is the cost from the start node to node n.
- h(n) is the heuristic estimate of the cost from n to the goal.

Algorithm:
1.  Initialize open_set with the start node and closed_set as empty.
2.  Set the g-score of the start node to 0 and calculate its f-score.
3.  While open_set is not empty:
    a. Select the node 'n' in open_set with the lowest f-score.
    b. If 'n' is the stop_node, reconstruct and return the path.
    c. Move 'n' from open_set to closed_set.
    d. For each neighbor 'm' of 'n':
        i. If 'm' is in closed_set and not reachable with a lower cost, skip it.
        ii. If 'm' is not in open_set or a shorter path to 'm' is found:
            - Update its parent to 'n'.
            - Update g(m) and calculate f(m).
            - Add 'm' to open_set if not already present.
4.  If open_set is empty and goal is not reached, return failure.

Input:
- Graph definition with weighted edges.
- Heuristic values for each node.
- Start and Stop nodes.

Output:
- The optimal path from start to stop node, or indication if no path exists.
'''

def aStarAlgo(start_node, stop_node):
    '''
    Implements the A* Search Algorithm to find the shortest path.
    '''
    
    open_set = set([start_node]) 
    closed_set = set()
    g = {} # Store distance from starting node
    parents = {} # Parents contains an adjacency map of all nodes from where they were reached
 
    # Distance of starting node from itself is zero
    g[start_node] = 0
    # Start_node is root node i.e it has no parent nodes
    # So start_node is set to its own parent node
    parents[start_node] = start_node
     
    while len(open_set) > 0:
        n = None
 
        # Find node with lowest f()
        for v in open_set:
            if n == None or g[v] + heuristic(v) < g[n] + heuristic(n):
                n = v
         
        if n == stop_node or Graph_nodes[n] == None:
            pass
        else:
            for (m, weight) in get_neighbors(n):
                # nodes 'm' not in first and last set are added to first
                # n is set its parent
                if m not in open_set and m not in closed_set:
                    open_set.add(m)
                    parents[m] = n
                    g[m] = g[n] + weight
                
                # For each node m, compare its distance from start i.e g(m) 
                # to the distance from start through n node
                else:
                    if g[m] > g[n] + weight:
                        # update g(m)
                        g[m] = g[n] + weight
                        # change parent of m to n
                        parents[m] = n
                         
                        # If m in closed set, remove and add to open
                        if m in closed_set:
                            closed_set.remove(m)
                            open_set.add(m)
 
        if n == None:
            print('Path does not exist!')
            return None
 
        # If the current node is the stop_node
        # then we begin reconstructing the path from it to the start_node
        if n == stop_node:
            path = []
 
            while parents[n] != n:
                path.append(n)
                n = parents[n]
 
            path.append(start_node)
            path.reverse()
 
            print('Path found: {}'.format(path))
            return path
 
        # Remove n from the open_list, and add it to closed_list
        # because all of his neighbors were inspected
        open_set.remove(n)
        closed_set.add(n)
 
    print('Path does not exist!')
    return None
         
def get_neighbors(v):
    '''
    Function to return neighbors and their distances from the passed node
    '''
    if v in Graph_nodes:
        return Graph_nodes[v]
    else:
        return None
 
def heuristic(n):
    '''
    Function to return heuristic distance for all nodes.
    For simplicity, we use pre-defined heuristic distances.
    '''
    H_dist = {
        'A': 11,
        'B': 6,
        'C': 99,
        'D': 1,
        'E': 7,
        'G': 0,
    }
 
    return H_dist[n]
 
# Describe the graph here  
Graph_nodes = {
    'A': [('B', 2), ('E', 3)],
    'B': [('C', 1),('G', 9)],
    'C': None,
    'E': [('D', 6)],
    'D': [('G', 1)],
}

# Execute the algorithm
aStarAlgo('A', 'G')
