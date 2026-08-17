#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;

int main() {
    FAST;
    int n , k ,q ; cin >> n >> k >> q;
    vector <ll> a(200002, 0);
    FOR(0,n){
        ll x ;
        cin >> x;
        a[x]++;
        cin >> x;
        a[x+1]--;
    }    
    ll sum = 0;
    ll prf = 0;
    FOR(0,200002){
        sum +=a[i];
        if(sum >= k) a[i]= 1;
        else a[i]= 0;
        prf += a[i];
        a[i] = prf;
    }

    FOR(0,q){
        int x1 , x2 ;cin >> x1 >> x2;
        cout << a[x2] - a[x1-1] << "\n";
    }
    return 0;
}
