#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int l = S.size();

    string bw;
    int diff_bw = 0;
    for (int i = 0; i < l; i++) {
	if (i % 2 == 0)
	    bw += '0';
	else
	    bw += '1';
    }

    string wb;
    int diff_wb = 0;
    for (int i = 0; i < l; i++) {
	if (i % 2 == 0)
	    wb += '1';
	else
	    wb += '0';
    }

    for (int i = 0; i < l; i++) {
        if (S[i] != bw[i])
	    diff_bw++;
        if (S[i] != wb[i])
	    diff_wb++;
    }

    cout << min(diff_wb, diff_bw) << endl;
    return 0;
}
