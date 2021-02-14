#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 13371337

ll power(ll x, ll y , ll mod){

    if(y == 1) return x;

    ll res = (power(x, y / 2 , mod)) % mod;

    if(y % 2 == 1) return ((res * res * x) % mod);
    return ((res * res) % mod);
}

int main() {

    ll p = power(a,b,MOD);

    return 0;
}
