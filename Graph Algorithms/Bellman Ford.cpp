#include <iostream>
#include <vector>
using namespace std;
#define ll long long int
#define INF 0x3f3f3f3f3f
#define N 105

ll n;
vector<ll> dist(N,INF);
vector<tuple<ll,ll,ll>> edge(0);

void BellmanFord(ll s){

    dist[s] = 0;

    for(ll round = 0; round <= n-1; round++){

        for(auto u : edge){
            ll a,b,w;
            tie(a,b,w) = u;

            dist[b] = min(dist[b] , dist[a] + w);
        }
    }

}

int main() {

    ll m;
    cin >> n >> m;
    
    for(ll i = 1; i <= m; i++){

        ll a,b,w;
        cin >> a >> b >> w;

        edge.push_back(make_tuple(a,b,w));
    }

    BellmanFord(1);

    return 0;
}
