#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

ll power(ll x, ll y){

    if(y == 1) return x;

    ll res = (power(x, y/2))%MOD;

    if(y % 2 == 1) return ((res * res * x) % MOD);
    else return ((res * res) % MOD);
    
}

int main() {

    ll p = power(a,b);

    return 0;
}
