#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;


int mysort(vector <int> &a ,int l, int r , int& num ){
    if(l==r) return a[l];
    
    int mid = (l + r )/2 ;
    int lmin = mysort(a , l , mid ,num );
    int rmin = mysort(a , mid+1  , r , num);
    int lmax = 0, rmax = 0;
    FOR(l, mid+1) lmax = max(lmax, a[i]);
    FOR ( mid +1 , r + 1 ) rmax = max(rmax,a[i]);
     if (lmax < rmin) {
        return lmin;
    } else if (rmax < lmin) {
        num++;
        return rmin;
    } else {
        return -1;
    }
}


int main() {
    FAST;
    int n ; 
    cin >> n;
    while(n--){
        int t ;
        cin >> t;
        vector <int> a(t);
        FOR(0,t) cin >> a[i];
        int num=0;
        int res = mysort(a , 0 , t-1 , num);
        if(res == -1)cout << -1 <<"\n";
        else cout << num <<"\n";
    }    
    
    return 0;
}
