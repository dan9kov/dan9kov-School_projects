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

ll time_revers(string t) {
    return (int(int(t[0]) - 48) * 10 + int(int(t[1]) - 48)) * 60 + (int(int(t[3]) - 48) * 10 + int(int(t[4]) - 48));
}

void time_revers(ll t) {
    cout << t / 60 << ":" << t % 60;
}

int main()
{
    ll speed, break_time, n, dist, sm_time;
    string str;
    cin >> speed >> break_time >> n;
    for (ll i = 0; i < n; ++i) {
        cin >> dist >> str;
        cout << int(str[0]) << "\n" << int(str[1]) << "\n";
        cout << time_revers(str) << "\n";
        time_revers(time_revers(str));
        cout << "\n";
    }

    return 0;
}
