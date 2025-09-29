#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

ll max_ = 1e15;
// ld tochnost = 0.0000000000000001;
ld tochnost = 1e-12;

bool f(ld mid, ld a, ll n) {
    ld cnt = mid;
    for (ll i = 0; i < n - 1; ++i) {
        cnt *= mid;
    }
    return cnt > a;
}

ld bin_search(ld a, ll n) {
    ld l = -max_, r = max_;
    ld mid = (l + r) / 2;
    while (r - l > tochnost) {
        mid = (l + r) / 2;
        if (f(mid, a, n)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return l;
}

int main()
{
    ll n;
    ld a;
    cin >> a >> n;
    cout << setprecision(10);
    cout << bin_search(a, n);
    return 0;
}