#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll bin_search(ll n, ll x, ll y) {
    ll l = 0, r = (n - 1) * y + x;
    ll mid = (l + r) / 2;
    while (l < r) {
        mid = (l + r) / 2;
        if (mid / x + mid / y >= n - 1) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return r + x;
    
}

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll y = max(a, b);
    ll x = min(a, b);
    
    cout << bin_search(n, x, y);
    return 0;
}

