#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c_neg = 0;
    string ans = "Positive";

    for (int i = a; i <= b; i++) {
	if (i == 0)
	{
	    ans = "Zero";
	    break;
	}
	if (i < 0)
	    c_neg++;
    }

    if ( ans != "Zero"
	    && c_neg > 0
	    && c_neg % 2 == 1)
	ans = "Negative";
    cout << ans << endl;
    return 0;
}
