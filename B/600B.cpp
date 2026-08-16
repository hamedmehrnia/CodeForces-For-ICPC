#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;

int main() {
    FAST;
    int n , m ;
    cin >> n >> m ;
    vector <ll> a(n);
    FOR(0,n)cin >> a[i];
    sort(a.begin() , a.end());
    FOR(0,m){
        ll x ;
        cin >> x ;
        int l = 0 , r = n-1 , ans = -1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(a[mid] <=  x){
                ans = mid;
                l = mid + 1;
            } 
            else r = mid - 1; 
        }
        cout << ans + 1 << " ";

    } 
    cout << "\n";  

    
    return 0;
}
