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
    if (t / 60 < 10) {
        cout << 0;
    }
    cout << t / 60 << ":";
    if (t % 60) {
        cout << 0;
    }
    cout << t % 60;
}

int main()
{
    ll speed, break_time, n, dist, sm_time = 0, time, global_dist = 0;
    string str;
    cin >> speed >> break_time >> n;
    for (ll i = 0; i < n; ++i) {
        cin >> dist >> str;
        
        time = (dist - global_dist) / speed;
        if ((dist - global_dist) % speed != 0) {
            ++time;
        }
        global_dist += dist;
        time = max(time, time_revers(str));
        sm_time += time + break_time;
        // cout << time_revers(str) << "\n";
        // time_revers(time_revers(str));
        // cout << "\n";
    }
    ll go_back = global_dist / speed;
    if (global_dist % speed != 0) {
        ++go_back;
    }
    time_revers(sm_time + go_back);

    return 0;
}
