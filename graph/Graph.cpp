#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    int v=4;
    vector<int> list[4];
    void addEdge(int u,int v){
        list[u].push_back(v);
        list[v].push_back(u);


    }
    void BFS(int s){
        bool visited[4]={false};
        queue<int> q;
        q.push(s);
        visited[s]=true;
        while(q.empty()==false){
            int u=q.front();
            cout<<u<<" ";
            q.pop();
            for(int i=0;i<list[u].size();i++){
                if(visited[list[u][i]]==false){
                    visited[list[u][i]]=true;
                    q.push(list[u][i]);
                }
            }
        }
    }



};



int main(){
Graph g;
g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(1, 3); 
   
    g.BFS(0);

}