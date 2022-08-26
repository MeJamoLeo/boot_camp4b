#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    string w;
    cin >> w;
    string ans = "Yes";
    map<char, int> mp;

    for (int i = 0; i < (int)w.size(); i++) mp[w[i]]++;
    for (int i = 0; i < (int)w.size(); i++)
    {
	if (mp[w[i]] % 2 == 1) 
	{
	    ans = "No";
	    break;
	}
    }

    cout << ans << endl;
    return 0;
}
