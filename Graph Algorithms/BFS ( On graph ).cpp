#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 105

vector<ll> adj[N];
vector<ll> dist(N,INF);

void bfs(ll s){

    vector<bool> visited(N);
    queue<ll> q;

    visited[s] = true;
    q.push(s);
    dist[s] = 0;

    while(!q.empty()){

        ll a = q.front();
        q.pop();

        // process node a

        for(auto u : adj[a]){

            if(visited[u] == true ) continue;
            visited[u] = true;

            dist[u] = dist[a] + 1;
            q.push(u);
        }

    }
}

int main() {

    bfs(0);

    return 0;
}
