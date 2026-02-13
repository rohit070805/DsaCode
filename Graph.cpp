/*
Graph:
    - Combination of edges and nodes
Degree:
    - NO of edges of a vertex
InDegree:
    - No of edges coming otwards you
OutDegree:
    - No og edges going away from you
Path:
    - Sequence of nodes{where no node is repeated}
Weighted:
    - Weight of edges present
Directed:
    - Direction od edges is present
Undirected:
    - No Direction/Always cyclic
Cyclic Graph:
    - cyclic present
Acyclic Graph:
    - No cycle present
*/

/*
Implementation:
    - Adjancany Matrix
        - Create a 2D array of size n*n {here n is number of nodes}
        - arr[i][j] = 1{if there is an edge between i and jth node}
        - arr[i][j] = 0{if there is no edge between i and jth node}

    - Adjancy List
*/