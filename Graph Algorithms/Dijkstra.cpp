#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 0x3f3f3f3f3f
#define N 100005

vector<ll> dist(N,INF);
vector<pair<ll,ll>> adj[N];

void dijkstra(ll s){

    vector<bool> visited(N);
    priority_queue<pair<ll,ll>> q;

    dist[s] = 0;
    q.push({0,s});

    while(!q.empty()){

        ll a = q.top().second;
        q.pop();

        if(visited[a] == true) continue;
        visited[a] = true;

        for(auto u : adj[a]){

            ll b = u.first;
            ll w = u.second;

            if(dist[a] + w < dist[b]){
                dist[b] = dist[a] + w;
                q.push({-dist[b],b});
            }

        }

    }
}

int main() {

    dijkstra(1);

    return 0;
}
