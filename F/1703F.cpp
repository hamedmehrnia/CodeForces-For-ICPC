#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;

int main() {
    FAST;
    int t ; cin >> t;
    while(t--){
        int n , cnt = 0 ; cin >> n;
        vector <ll> a(n);
        vector <pair<ll , int>> b;
        FOR(0,n){
            cin >> a[i];
            if(a[i] < i + 1){
                pair<ll , int>x;
                x.first = a[i];
                x.second = i + 1;
                b.push_back(x);
                cnt++;
            }
        }
        sort(b.begin() , b.end());
        ll res = 0;
        

        FOR(0,cnt){
            ll x = b[i].second;
            ll l = 0 , r = cnt ;
            while(l < r){
                ll mid = l +(r-l)/2;
                if(b[mid].first > x) r = mid ;
                else l = mid + 1;
            }
            if (l==0) l =cnt ;
            res += (cnt - l );
        }
        cout << res << "\n";

    }
    
    return 0;
}
