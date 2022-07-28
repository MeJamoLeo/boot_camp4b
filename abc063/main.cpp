#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    string S;
    cin >> S;
    //S = "different";
    map<char, int> mp;
    for (int i = 0; i < (int)S.size(); i++) {
	if (mp[S[i]] != 0) {
	    cout << "no" << endl;
	    return 0;
	}
	mp[S[i]]++;
    }
    cout << "yes" << endl;
    return 0;
}
