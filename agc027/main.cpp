#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
	cin >> a.at(i);
    int res = 0;

    sort(a.begin(), a.end());
    while (0 < N--) {
	if (x < a.at(res))
	    break;
	x = x - a.at(res);
	if (N==0 && x > 0)
	    break;
	res++;
    }

    cout << res << endl;
    return 0;
}
