#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    bool table[M][N];

    for (int i = 0; i < M; i++) {
	int L, R;
	cin >> L >> R;
	for (int j = L-1 ; j < R; j++) {
	    if (i == 0) {
		table[i][j] = true;
		continue;
	    } else {
		if (table[i-1][j] == true)
		    table[i][j] = true;
	    }
	}
    }

    /*
    for (int i = 0; i < M; i++) {
	for (int j = 0; j < N; j++) {
	    if (table[i][j] == true ) cout << "o";
	    else cout << "x";
	}
	cout << endl;
    }
    */

    int ans = 0;
    for (int i = 0; i < N; i++) {
	if (table[M-1][i] == true)
	    ans++;
    }
    
    cout << ans << endl;
    return 0;
}
