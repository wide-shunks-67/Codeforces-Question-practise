#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if (is_sorted(a.begin(), a.end())) {
        cout << "Yes
";
        return;
    }
    long long k = 0;
    long long max_so_far = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < max_so_far) {
            k = max(k, max_so_far - a[i]);
        }
        max_so_far = max(max_so_far, a[i]);
    }
    long long prev = a[0];
    for (int i = 1; i < n; i++) {
        long long o1 = a[i];
        long long o2 = a[i] + k;
        long long c = -1;
        
        if (o1 >= prev) {
            c = o1;
         } else if (o2 >= prev) {
            c = o2; 
          } else {
            cout << "No
";
            return;
        }
        prev = c;
    }
    
    cout << "Yes
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}