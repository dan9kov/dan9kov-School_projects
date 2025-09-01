#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main () {
    ll n, m, data, cnt = 0;
    cin >> n >> m;
    vector<vector<ll>> arr(n, vector<ll>(m));
    vector<vector<bool>> b(n, vector<bool>(m));

    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            b[i][j] = 0;
        }
    }

    ll mn = 999999999999, mx = 0;
    for (ll i = 0; i < n; ++i) {
        mn = 999999999999, mx = 0;
        for (ll j = 0; j < m; ++j) {
            if (mn > arr[i][j]) {
                mn = arr[i][j];
            }
        }
        for (ll j = 0; j < m; ++j) {
            if (mn == arr[i][j]) {
                for (ll z = 0; z < m; ++z) {
                    if (mx < arr[z][j]) {
                        mx = arr[z][j];
                    }
                }

                for (ll z = 0; z < m; ++z) {
                    if (mx == arr[z][j] and !b[z][j]) {
                        ++cnt;
                        b[z][j] = true;
                    }
                }
            }
        }
    }
    cout << cnt << "\n";
    // for (ll i = 0; i < n; ++i) {
    //     for (ll j = 0; j < m; ++j) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    return 0;
}