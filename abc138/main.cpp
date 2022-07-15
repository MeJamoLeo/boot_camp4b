#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int N;
    float res;
    cin >> N;

    vector<float> values(N);
    for (int i = 0; i < N; i++) {
	cin >> values.at(i);
    }
    sort(values.begin(),  values.end());

    res = values.at(0);
    for (int i = 1; i < N ; i++) {
	res = (res + values.at(i)) / 2;
    }

    cout << res << endl;
    return 0;
}

/*
 * recursive ??
 */
