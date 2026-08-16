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
        int n , m ; 
        ll L;
        cin >> n >> m >> L;
        vector <pair<ll, ll>> a(n) , b(m);
        FOR(0,n)cin >> a[i].first >> a[i].second;
        FOR(0,m)cin >> b[i].first >> b[i].second;
        ll res = 0;
        priority_queue <ll>pq;
        int j = 0;
        ll jump = 1;
        bool ok = true;
        FOR(0,n){
            if(a[i].first > L)break;
            int needjump = -a[i].first + a[i].second + 2;
            if(jump< needjump){
                while( j < m && b[j].first < a[i].first){
                    pq.push(b[j].second);
                    j++;
                }
                while(!pq.empty() && jump < needjump){
                    jump += pq.top();
                    pq.pop();
                    res ++;
                }
                if(jump<needjump){
                    ok = false;
                    break;
                }
            }

        }

        if(ok)cout << res << "\n";
        else  cout << -1 << "\n"; 

    }
    
    
    return 0;
}
