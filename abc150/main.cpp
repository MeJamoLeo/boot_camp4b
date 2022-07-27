#include <bits/stdc++.h>
#include <cmath>
#include <map>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N), Q(N);
    for (int i = 0; i < N; i++) cin >> P[i];
    for (int i = 0; i < N; i++) cin >> Q[i];
    vector<int> A(N);
    for (int i = 0; i < N; i++) A[i] = i + 1;

    map<vector<int>, int> mp;
    do {
	mp[A] = mp.size();
    } while(next_permutation(A.begin(), A.end()));

    int ans = abs(mp[P] - mp[Q]);
    cout << ans << endl;
    return 0;
}

