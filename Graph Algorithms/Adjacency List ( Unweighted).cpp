#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

    ll n,m;
    cin >> n >> m;

    vector<ll> adj[n+5];

    for(ll i = 1; i <= m; i++){

        ll a,b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a); // only if un-directed
    }

    return 0;
}
