#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int ans = INT_MAX;
    int L = S.size();

    for (int i = 0; i + 3 <= L; i++) {
	string tmp_s = S.substr(i, 3);
	int tmp_i = stoi(tmp_s);
	int diff = abs(753 - tmp_i);
	if (diff < ans) ans = diff;
    }
    cout << ans << endl;
    return 0;
}
