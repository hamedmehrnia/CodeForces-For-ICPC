#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;

int main() {
    FAST;
    int t;cin >> t;
    while(t--){
        int n , a , b ; cin >> n >> a >> b;
        int x = 0;
        FOR(0,n){
            char res= 'a';
            res = res + (x++  % b);
            cout << res;
        }
        cout << "\n";

    }    
    
    return 0;
}
