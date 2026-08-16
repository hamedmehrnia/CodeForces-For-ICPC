#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;


ll sq(ll x){
    ll r = sqrt(x);
    while((r+1)*(r+1) <= x) r++;
    while(r*r > x) r--;
    return r;
}
int main() {
    FAST;
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll l = 0 , r = LLONG_MAX ;
        while(l < r){
            ll res = l + (r-l)/2;
            ll mid = res;
            res = res - ll(sq(res));
            if(res >= n) r = mid;
            else l = mid + 1;
        } 
        cout << l << "\n";
    }
    return 0;
}
