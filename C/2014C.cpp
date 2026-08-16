#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;

int main() {
    FAST;
    int t;cin>>t;
    while(t--){
        int n ; cin >> n ;
        ll sum = 0 , maxi = 0;
        vector <ll> v(n);
        FOR(0,n){
            cin >> v[i];
            sum += v[i];
        }
        if (n <=2 ) cout << -1 << "\n";
        else{
            sort(v.begin() , v.end());
            ll x = v[n/2];
            ll res = x * n * 2 - sum;
            while(x * 2 * n >= sum + res)res++;
            if(res < 0)cout << 0 << "\n";
            else{
                cout << res << "\n";
            } 
        }

    }
    
    return 0;
}
