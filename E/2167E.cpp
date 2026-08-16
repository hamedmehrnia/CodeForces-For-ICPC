#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;

bool check(ll d, vector<ll>& a, int n, int k, ll x)
{
    ll cnt = 0;

    if (a[0] - d >= 0)
        cnt += a[0] - d + 1;

    for (int i = 0; i + 1 < n; i++) {
        ll L = a[i] + d;
        ll R = a[i + 1] - d;

        if (L <= R)
            cnt += R - L + 1;

        if (cnt >= k)
            return true;
    }

    if (a[n-1] + d <= x)
        cnt += x - (a[n-1] + d) + 1;

    return cnt >= k;
}

int main() {
    FAST;

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        ll x;
        cin >> n >> k >> x;
        vector<ll> a(n);
        FOR(0,n) cin >> a[i];
        sort(a.begin(), a.end());


        ll l = 0, r = x;

        while (l < r) {
            ll mid = l + (r - l + 1) / 2;

            if(check(mid, a, n, k, x))
                l = mid;
            else
                r = mid - 1;
        }

        ll d = l;

        vector<ll> ans;

        auto add = [&](ll L, ll R) {
            if (L > R) return;

            while (L <= R && (int)ans.size() < k) {
                if (ans.empty() || ans.back() != L)
                    ans.push_back(L);
                L++;
            }
        };

        add(0, a[0] - d);

        for (int i = 0; i + 1 < n; i++) {
            add(a[i] + d, a[i+1] - d);
        }

        add(a[n-1] + d, x);


        for (ll v : ans)
            cout << v << ' ';

        cout << '\n';
    }

    return 0;
}