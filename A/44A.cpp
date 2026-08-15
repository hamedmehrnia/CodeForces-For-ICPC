#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;

int main() {
    FAST;
    int n;
    cin >> n;
    unordered_set<string> a ;
    
    while(n--){
        string b , c;
        cin >> b >> c;
        b = b  + "0123" + c;
        a.insert(b);
    }    
    cout << a.size() << "\n";
    return 0;
}
