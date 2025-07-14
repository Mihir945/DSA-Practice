/* 
              BFS Traversal in Graph
            ..........................

$ problem : Given an undirected graph with N nodes and V edges,
the task is to perform Breadth-First-Search(BFS) traversal starting 
from node 0.

$ Input   : Graph as adjancy list
$ Output : BFS traversal order


$ Approach:
- Use queue to explore nodes level by level 
- use visited array to avoid reprocessing

$ Time Complexity: O(N+V)
$ Space Complexity: O(N)



$ Status: Solved and Tested
$ Author: Mihir Kumar
$ Date: 11 july 2025
$ Tags: Graph, BFS , Traversal


*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int>
