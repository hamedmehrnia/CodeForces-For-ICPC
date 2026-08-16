#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;

int main() {
    FAST;
    int n , k;cin>>n>>k;
    vector <ll> v(n);
    FOR(0,n)cin>>v[i];
    unordered_map <ll,int> pq;
    int j = 0 ;ll res = 0 , sum =0;
    for(int i = 0 ; i<n;i++){
        while(j < n && pq.size() + (!pq.count(v[j])) <= k){
            pq[v[j]]++;
            sum += v[j];
            j++;
        }
        res = max(res , sum);
        pq[v[i]] --;
        sum -=  v[i];
        if(pq[v[i]] == 0) pq.erase(v[i]);
    }
    cout << res << "\n";
    return 0;
}
