#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define tc ll test;cin >> test;while(test--)
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f3f
#define MOD 1000000007
#define ff first
#define ss second
#define in >>
#define out <<
#define space << " " <<
#define spacef << " "
#define fo(i,a,b) for(ll i = a; i <= b; i++)
#define nextline out "\n"
#define print(x) for(auto i : x ) cout out i spacef
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)
#define N 105

int main() {

    ll n,m;
    cin >> n >> m;

    vector<vector<ll>> adj(n+5,vector<ll>(n+5));

    for(ll i = 1; i <= m; i++){

        ll a,b,w;
        cin >> a >> b >> w;

        adj[a][b] = w;
        adj[b][a] = w; // only if un-directed
    }

    return 0;
}
