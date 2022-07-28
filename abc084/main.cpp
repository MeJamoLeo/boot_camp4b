#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int A, B;
    string S;
    cin >> A >> B >> S;
    for (int i = 0; i < A+B+1; i++) {
	if (i == A) {
	    if (S[i] != '-') {
		cout << "No" << endl;
		return 0;
	    } else 
		continue;
	}
	if (S[i] < '0' || '9' < S[i]) {
	    cout << "No" << endl;
	    return 0;
	}
    }
    cout << "Yes" << endl;
    return 0;
}
