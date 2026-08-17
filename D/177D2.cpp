#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;



int main() {
    FAST;

    int n, m, c;
    cin >> n >> m >> c;

    vector<int> a(n);
    vector<int> b(m);

    FOR(0,n) cin >> a[i];
    FOR(0,m) cin >> b[i];


    vector<long long> diff(n + 1, 0);

    FOR(0,m){
        int l = i;
        int r = n - m + i;
        diff[l] += b[i];
        diff[r + 1] -= b[i];
    }

    vector<long long> add(n, 0);
    long long cur = 0;
    FOR(0,n){
        cur += diff[i];
        cur %= c;
        if (cur < 0) cur += c;
        add[i] = cur;
    }

    FOR(0,n) {
        a[i] = (a[i] + add[i]) % c;
        cout << a[i] << ' ';
    }

    cout << '\n';

    return 0;
}