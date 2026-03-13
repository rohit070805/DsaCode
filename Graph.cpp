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
template<typename T>
// Ye templaet sirf next class k liye kam krega,Wgraph k liye nya likhna pdega
class Graph{
    unordered_map<T,vector<T>> adjList;
    public:
    void addEdge(T u,T v,bool directed){
        if(directed){
            adjList[u].push_back(v);
        }
        else{
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        // Printing
        
    }
    void printadjList(){
        for(auto p:adjList){
            cout<<endl<<"neighbours of "<<p.first<<" are: ";
            for(auto i:p.second){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
};
template<typename T>
class WGraph{
    unordered_map<T,vector<pair<T,int>>> adjList;
    public:
    void addEdge(T u,T v,int w,bool directed){
        if(directed){
            adjList[u].push_back(make_pair(v,w));
        }
        else{
            adjList[u].push_back(make_pair(v,w));
            adjList[v].push_back(make_pair(u,w));
        }

        // Printing
        
    }
    void printadjList(){
        for(auto p:adjList){
            cout<<endl<<"neighbours of "<<p.first<<" are: "<<endl;
            for(auto i:p.second){
                cout<<i.first<<" ->Weight: "<<i.second<<endl;
            }
            cout<<endl;
        }
    }
};
int main(){
    WGraph<int> g1;
    g1.addEdge(1,2,5,1);
     g1.addEdge(1,3,4,1);
      g1.addEdge(1,4,3,1);
       g1.addEdge(1,5,2,1);
       g1.printadjList();
       return 0;
}