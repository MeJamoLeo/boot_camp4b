#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    long long H;
    cin >> H;
    int n = 0;

    while (H != 1) {
	H /= 2;
	n++;
    }

    long long ans = 0;
    while (n >= 0) {
	ans += pow(2, n--);
    }
    cout << ans << endl;
    return 0;
}
