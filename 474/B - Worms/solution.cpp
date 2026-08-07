#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int a;
        cin >> a;
        pref[i] = pref[i - 1] + a; // Prefix sum calculation
    }
 
    int m;
    cin >> m;
    while (m--) {
        int q;
        cin >> q;
        // Binary search to find the first index where pref[i] >= q
        auto it = lower_bound(pref.begin() + 1, pref.end(), q);
        int pile_index = distance(pref.begin(), it);
        cout << pile_index << "
";
    }
 
    return 0;
}