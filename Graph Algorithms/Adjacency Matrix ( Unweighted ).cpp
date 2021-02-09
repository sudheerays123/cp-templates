#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

    ll n,m;
    cin >> n >> m;

    vector<vector<ll>> adj(n+5,vector<ll>(n+5));

    for(ll i = 1; i <= m; i++){

        ll a,b;
        cin >> a >> b;

        adj[a][b] = 1;
        adj[b][a] = 1; // only if un-directed
    }

    return 0;
}
