#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;

int main() {
    FAST;

    int n;
    cin >> n;

    while (n--) {

        int t;
        cin >> t;

        vector<pair<ll, bool>> a(t);

        vector<int> prv(t);
        vector<int> nxt(t);

        priority_queue<
            pair<ll, int>,
            vector<pair<ll, int>>,
            greater<pair<ll, int>>
        > pq;

        FOR(0,t) {
            cin >> a[i].first;
            a[i].second = true;

            pq.push({a[i].first, i});

            prv[i] = (i - 1 + t) % t;
            nxt[i] = (i + 1) % t;
        }

        ll cost = 0;

        for (int k = 0; k < t - 1; k++) {

            auto x = pq.top();
            pq.pop();

            int i = x.second;

            if (!a[i].second) {
                k--;
                continue;
            }

            int left = prv[i];
            int right = nxt[i];

            cost += min(a[left].first, a[right].first);

            a[i].second = false;

            nxt[left] = right;
            prv[right] = left;
        }

        cout << cost << '\n';
    }

    return 0;
}