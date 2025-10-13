#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

ll max_ = 1e15;
// ld tochnost = 0.0000000000000001;
ld tochnost = 1e-12;

bool f(ld mid, ld c) {
    return mid * mid + sqrt(mid) > c;
}

ld bin_search(ld c) {
    ld l = -max_, r = max_;
    ld mid = (l + r) / 2;
    while (r - l > tochnost) {
        mid = (l + r) / 2;
        if (f(mid, c)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return l;
}


int main()
{
    ld c;
    cin >> c;
    cout << setprecision(7);
    cout << bin_search(c);
    
    return 0;
}