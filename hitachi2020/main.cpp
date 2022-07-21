#include <bits/stdc++.h>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int main() {
    int A, B, M;
    cin >> A >> B >> M;
    int a[A], b[B];
    for (int i = 0; i < A; i++) cin >> a[i];
    for (int i = 0; i < B; i++) cin >> b[i];
    int ans = *min_element(a, a + A) + *min_element(b, b + B);

    for (int i = 0; i < M; i++) {
	int x, y, c;
	cin >> x >> y >> c;
	int cost = a[x - 1] + b[y - 1] - c;
	if (ans > cost) ans = cost;
    }
    cout << ans << endl;
    return 0;
}
