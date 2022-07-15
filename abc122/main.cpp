#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int count = 0;

    for (int i = 0; i < int(S.size()); i++) {
	int tmp = 0;
	while ( S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T' ) {
	    tmp++;
	    i++;
	}
	if (count < tmp)
	    count = tmp;
    }
    cout << count << endl;
    return 0;
}
