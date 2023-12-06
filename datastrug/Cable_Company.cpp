#include<bits/stdc++.h>
using namespace std;

bool isValidEdge(int u, int v, vector<bool> visited){
    if (u == v)
       return false;
    if (visited[u] == false && visited[v] == false)
        return false;
    else if (visited[u] == true && visited[v] == true)
        return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    int adj[n][n];
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            adj[i][j] = 1000000;
        }
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int x;
            cin >> x;
            adj[i][j] = x;
            adj[j][i] = x;
        }
    }
    vector<bool> visited(n);
    visited[0] = true;

    int edge_count = 0, mincost = 0;
    while (edge_count < n - 1) {
        // Find minimum weight valid edge.  
        int min = INT_MAX, a = -1, b = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {               
                if (adj[i][j] < min) {
                    if (isValidEdge(i, j, visited)) {
                        min = adj[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        if (a != -1 && b != -1) {
            edge_count++;
            mincost = mincost + min;
            visited[b] = visited[a] = true;
        }
    }
    cout << mincost;
}
