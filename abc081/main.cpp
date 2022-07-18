#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int flag = 1;
    int ans = 0;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);

    while (1) {
	for (int i = 0; i < N ; i++) {
	    if (A.at(i) % 2 == 0)
		A.at(i) = A.at(i)/2;
	    else {
		flag = 0;
		break;
	    }
	}
	if (flag == 0)
	    break;
	ans++;
    }

    cout << ans << endl;
    return 0;
}
