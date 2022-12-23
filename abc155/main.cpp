#include <algorithm>
#include <bits/stdc++.h>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    map<string, int> mp;
    int N;
    int max = 0;
    set<string> st;
    cin >> N;

    for (int i = 0; i < N; i++) {
	string S;
	cin >> S;
	if (max == mp[S]) st.insert(S);
	if (max < mp[S]) {
	    st.clear();
	    st.insert(S);
	    max = mp[S];
	}
    };

    string ary[st.size()];

    auto itr = st.begin();
    int i = 0;
    while (itr != st.end()) {
	ary[i] = (*itr);
	i++;
    }
    sort(ary->begin(), ary->end());

    for (int i = 0; i < (int)st.size(); i++) cout << ary[i] << endl;;
    return 0;
}
