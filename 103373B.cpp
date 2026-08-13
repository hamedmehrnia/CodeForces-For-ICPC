#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;

int main() {
    FAST;
    int n ; 
    cin >> n;
    const int maxn = 1000001;
    vector<ll> a(maxn,0);
    
    FOR(1,maxn){

        for(int j = 2 * i; j<maxn;j+=i){
            a[j] += i;
        }
    }    
    
    while(n--){
        int x;
        cin >> x;
        if(a[x]== x ) cout << "perfect\n" ;
        else if(a[x] > x ) cout << "abundant\n";
        else cout << "deficient\n";
    }

    return 0;
}
