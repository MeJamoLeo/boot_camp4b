#include <bits/stdc++.h>
#include <map>
#include <vector>
using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;
    int ppl[N];

    for (int i = 0; i < N; i++) ppl[i] = K-Q;

    for (int i = 0; i < Q; i++) {
	int A;
	cin >> A;
	ppl[A-1]++;
    }
    for (int i = 0; i < N; i++) {
	if (ppl[i] <= 0) cout << "No" << endl;
	else cout << "Yes" << endl;
    }
    return 0;
}
