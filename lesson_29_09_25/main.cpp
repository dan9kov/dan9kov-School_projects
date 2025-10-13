#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

ll max_ = 1e15;
// ld tochnost = 0.0000000000000001;
ld tochnost = 1e-12;

bool f(ld mid, ll a, ll b, ll c, ll d) {
    return a * mid * mid * mid + b * mid * mid + c * mid + d > 0;
}

ld bin_search_plus(ll a, ll b, ll c, ll d) {
    ld l = 0, r = max_;
    ld mid = (l + r) / 2;
    while (r - l > tochnost) {
        mid = (l + r) / 2;
        if (f(mid, a, b, c, d)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return l;
}

ld bin_search_minus(ll a, ll b, ll c, ll d) {
    ld l = -max_, r = 0;
    ld mid = (l + r) / 2;
    while (r - l > tochnost) {
        mid = (l + r) / 2;
        if (f(mid, a, b, c, d)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return l;
}


int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d == 0) {
        cout << 0;
    } else {
        cout << bin_search_plus(a, b, c, d) << " " << ;
    }
    
    return 0;
}