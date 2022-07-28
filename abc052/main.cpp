#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    int ans = 0;
    int tmp = 0;

    for (int i = 0; i < N; i++) {
	if (S[i] == 'I')
	    tmp++;
	else if (S[i] == 'D')
	    tmp--;
	if (ans < tmp)
	    ans = tmp;
    }
    cout << ans << endl;
    return 0;
}
