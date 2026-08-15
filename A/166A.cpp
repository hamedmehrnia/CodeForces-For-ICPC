#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;

int main() {
    FAST;
    int n , k;
    cin >> n >> k;
    vector <pair<int , int >> a(n);
    FOR(0,n){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin() , a.end(),[](auto &a , auto &b ){
         if(a.first != b.first) return a.first > b.first;
         return a.second < b.second;
         } ) ;

    int x = a[k-1].first,y = a[k-1].second ,res = 0 ;
    FOR(0,n){
        if(a[i].first == x && a[i].second == y ) res++;
    }
    cout << res << "\n";
    return 0;
}
