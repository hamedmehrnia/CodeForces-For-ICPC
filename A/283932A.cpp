#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;


int main() {
    FAST;

    ll w, h, n;
    cin >> w >> h >> n;

    ll r = 1, l = 1e18;
    while (r < l) {
        ll mid = (r + l) / 2;

        __int128 cnt = (__int128)(mid / w) * (mid / h);

        if (cnt >= n)
            l = mid;
        else
            r = mid + 1;
    }

    cout << r << '\n';

    return 0;
}