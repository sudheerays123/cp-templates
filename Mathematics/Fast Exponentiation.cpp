#include <iostream>
#include <vector>
#include <algorithm>
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

    ll p = power(2,9,MOD);

    return 0;
}
