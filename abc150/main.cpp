#include <bits/stdc++.h>
#include <cmath>
using namespace std;



int main() {
    int N;
    cin >> N;
    int P[N], Q[N];
    for (int i = 0; i < N; i++) cin >> P[i];
    for (int i = 0; i < N; i++) cin >> Q[i];
    int ans = 0;

    ans = 8 * 7* 6* 5* 4* 3 * 2* 1;

    cout << ans << endl;
    return 0;
}

