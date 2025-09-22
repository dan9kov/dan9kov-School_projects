#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll max_ = 1e9;

bool f(ll mid, ll a, ll b, ll c, ll x, ll k) {
    ll buy = mid;
    if (mid >= a and mid <= b) {
        buy += mid * c / 100;
        if (mid * c % 100 != 0) {
            ++buy;
        }
    }
    return x < buy * k;
}

ll bin_search(ll a, ll b, ll c, ll x, ll k) {
    ll l = -1, r = max_;
    ll mid = (l + r) / 2;
    while (r - l > 1) {
        mid = (l + r) / 2;
        if (f(mid, a, b, c, x, k)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return l;
}

int main()
{
    ll a, b, c, x, k;
    cin >> a >> b >> c >> x >> k;
    ll answer = bin_search(a, b, c, x, k);
    if (!f(answer, a, b, c, x, k)) {
        cout << answer;
    } else {
        cout << answer - 1;
    }
    return 0;
}