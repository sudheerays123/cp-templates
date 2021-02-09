#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

    ll n,m;
    cin >> n >> m;

    vector<pair<ll,ll>> adj[n+5];

    for(ll i = 1; i <= m; i++){
        
        ll a,b,w;
        cin >> a >> b >> w;

        adj[a].push_back(make_pair(b,w));
        adj[b].push_back(make_pair(a,w)); // only if un-directed
    }

    return 0;
}
