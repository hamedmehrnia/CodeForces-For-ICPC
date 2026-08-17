#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;

int main() {
    FAST;
    int t ; cin >> t;
    while(t--){
        int n ; cin >> n ;
        FOR(0,n){
            if(i == 0) cout << n << " ";
            else cout << i << " "; 
        }
        cout << "\n";
    }
    
    return 0;
}
