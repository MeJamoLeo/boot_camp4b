#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int ans = 0;

    for (int i = A; i <= B; i++) {
	if ( i / 10000 == i % 10
		&& (i % 10000) / 1000 == (i / 10) % 10)
	    ans++;
    }
    cout << ans << endl;
    return 0;
}
