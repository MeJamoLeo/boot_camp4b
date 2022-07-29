#include <bits/stdc++.h>
#include <map>
#include <vector>
using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;
    map<int, int> mp;

    for (int i = 0; i < N; i++) mp[i] = K;

    for (int i = 0; i < Q; i++) {
	int A;
	cin >> A;
	for (int i = 0; i < (int)mp.size(); i++) {
	    if (A != i+1)
		mp[i]--;
	}
    }
    for (int i = 0; i < N; i++) {
	if (mp[i] <= 0) cout << "No" << endl;
	else cout << "Yes" << endl;
    }
    return 0;
}
