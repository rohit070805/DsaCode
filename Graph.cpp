#include <bits/stdc++.h>
using namespace std;
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
        - har ek node ke liye ek list bnao {here in this node store the neighbours for this node}
*/

class Graph{
    public:
    unordered_map<int,list<int>> adjList;
    void addEdge(int u,int v,bool directed){
        if(directed){
            adjList[u].push_back(v);
        }else{
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        cout<<"Printting list"<<endl;
        printAdjList();
        cout<<endl;
    }
    void printAdjList(){
        for(auto i:adjList){
            cout<<i.first <<" ->{";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<"}"<<endl;
        }
    }
};
int main(){
    Graph g;
    g.addEdge(0,1,1);
     g.addEdge(1,2,1);
      g.addEdge(1,3,1);
       g.addEdge(3,1,1);
       return 0;
}