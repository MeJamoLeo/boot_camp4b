#include <bits/stdc++.h>
#include <algorithm>
#include <climits>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    int P[N];
    int lowest = INT_MAX;
    int ans = 0;

    for (int i = 0; i < N; i++) {
        cin >> P[i];
	if (min(lowest, P[i]) == P[i])
	{
	    lowest = P[i];
	    ans++;
	}
    }

    cout << ans << endl;
    return 0;
}
