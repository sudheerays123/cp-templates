#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isKpossible(ll k){
    
}

int main() {

    ll low = 1;
    ll high = 1e18;
    ll ans;

    while(low <= high){

        ll mid = (low + high)/2;
        
        if(isKpossible(mid) == true){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }

    cout << ans;
    
    return 0;

}
