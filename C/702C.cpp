#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;



int main() {
    FAST;
    int n, m;
    cin >> n >> m;
    
    vector<ll> a(n), b(m);
    FOR(0, n) cin >> a[i];
    FOR(0, m) cin >> b[i];
    
    ll r = 0;
    int j = 0;  
    
    FOR (0 , n) {
        while (j + 1 < m && abs(b[j + 1] - a[i]) <= abs(b[j] - a[i])) {
            j++;
        }
        
       
        ll dist = abs(b[j] - a[i]);
        r = max(r, dist);
    }
    
    cout << r << "\n";
    
    return 0;
}
