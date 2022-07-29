#include <bits/stdc++.h>
#include <climits>
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int time[5] = {a, b, c, d, e};
    int ans = 0;
    int last;

    for (int i = 0; i < 5; i++) {
	if (i == 0)
	    last = time[i];
	else if (time[i] % 10 != 0 && last % 10 > time[i] % 10) {
	    ans += last + (10 - last % 10);
	    last = time[i];
	}
	else {
	    if (time[i] % 10 == 0)
		ans += time[i];
	    else
		ans += time[i] + (10 - time[i] % 10);
	}
    }

    cout << ans + last << endl;
    return 0;
}
