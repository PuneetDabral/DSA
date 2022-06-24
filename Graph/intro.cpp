/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;

    void add_edge(int u, int v, bool direction)
    {
        // dierction =0->undirected
        // dierction =1->directed

        // created a edge from u to v
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }

    }

     void pritAdjList(){
        for(auto i:adj){
            cout<<i.first<<"-> ";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
        }
};

int main()
{
  int n ;
  cout<<"enter the number of node"<<endl;
    cin>>n;

    int m;
  cout<<"enter the number of edge"<<endl;
    cin>>m;

    graph g;

for(int i=0; i<m; i++){
    int u,v;
    cin>>u>>v;
    //creating undirected graph
    g.add_edge(u,v,0);
}
//printing draph 
g.pritAdjList();
    return 0;
}