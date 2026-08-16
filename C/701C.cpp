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
    string s;
    cin >> s;
    
    unordered_set<char> uniqueTypes(s.begin(), s.end());
    int totalTypes = uniqueTypes.size();
    
    unordered_map<char, int> freq;
    int left = 0;
    int minLen = n;
    
    for (int right = 0; right < n; right++) {
        freq[s[right]]++;
        
        while (freq.size() == totalTypes) {
            minLen = min(minLen, right - left + 1);
            
            freq[s[left]]--;
            if (freq[s[left]] == 0) {
                freq.erase(s[left]);
            }
            left++;
        }
    }
    
    cout << minLen << "\n";
    
    return 0;
}