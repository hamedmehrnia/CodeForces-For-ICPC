#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;

int main() {
    FAST;
    
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n ;
        vector <ll> a(n+2) , freq(n+2);
        
        FOR(1,n+1){
            ll r;
            cin >> r ;
            if(r <=n) a[r]++;
        }
        FOR(1,n+1){
            for(int j = i;j<=n;j+=i){
                freq[j] += a[i];
            }
        } 



        ll maxi=0 ;
        FOR(1,n+1){
        
         if(maxi < freq[i]){
                maxi = freq[i];
        }
        }
        
        cout << maxi << "\n"; 
    
    }

    return 0;
}
