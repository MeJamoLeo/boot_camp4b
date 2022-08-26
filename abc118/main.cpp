#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    map<int, int> mp;
    int ans = 0;

    for (int i = 0; i < N; i++) {
	int K;
	cin >> K;
	for (int i = 0; i < K; i++) {
	    int A;
	    cin >> A;
	    mp[A]++;
	    if (mp[A] == N)
		ans++;
	}
    }
    cout << ans << endl;
    return 0;
}
