#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 105

vector<bool> visited(N);
vector<ll> adj[N];

void dfs(ll s){
    
    if(visited[s] == true) return;
    visited[s] = true;
    
    // process node s
    
    for(auto u : adj[s]) dfs(u);
    
}

int main() {
    
    dfs(0);
    
    return 0;
}
