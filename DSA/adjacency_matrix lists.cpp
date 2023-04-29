#include <bits/stdc++.h>
#include <string.h>
using namespace std;

const int N=1e3+!0;
//adjacency matrix
int graph[N][N];
//adjecency lists
vector<pair<int,int>> graph2[N];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2,wt;
        cin>>v1>>v2>>wt;
        graph[v1][v2]=wt;
        graph[v2][v1]=wt;

        graph2[v1].push_back({v2,wt});
        graph2[v2].push_back({v1,wt});
    }
    return 0;
}
//adjacency matrix 
//O(N^2)--> space complexity

//adjecency lists
//O(N+M)-->spcae complexity
//can stor N=10^5
//edges should be less than 10^7
