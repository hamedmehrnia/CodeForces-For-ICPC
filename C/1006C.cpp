#include <bits/stdc++.h>
using namespace std;

#define FOR(start, end) for (long long i = start; i < end; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0);

typedef long long ll;



#include <bits/stdc++.h>
using namespace std;

int main() {
    FAST;
    
    int n;
    cin >> n;
    vector<ll> a(n);
    FOR(0,n)cin>>a[i];
    int  i = 0 , j = n- 1;
    ll sum1 = 0 , sum2 = 0 , res = 0;
    while(i<=j){
        if(sum1 == sum2) res = max(sum1 , res);

        if(sum1 <= sum2){
            sum1 += a[i++];
        }else{
            sum2 +=a[j--];
        }
    }
    if(sum1 == sum2) res = max(sum1 , res);
    cout << res << "\n";


    return 0;
}