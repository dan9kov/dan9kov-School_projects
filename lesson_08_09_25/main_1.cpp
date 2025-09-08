#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool f(ll mid, ll h, ll w, ll n) {
    return (mid / h) * (mid / w) >= n;
}

ll bin_search(ll n, ll h, ll w) {
    ll l = 1, r = n * w;
    ll mid = (l + r) / 2;
    while (r - l > 1) {
        mid = (l + r) / 2;
        if (f(mid, h, w, n)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return r;
}

int main()
{
    ll w, h, n;
    cin >> w >> h >> n;
    cout << bin_search(n, h, w);

    return 0;
}
