#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> costs(M);
    for (int i = 0; i < M; i++)
	cin >> costs.at(i);
    int cost_l = 0;
    int cost_r = 0;

    for (int i = 0; i < M; i++) {
	if (costs.at(i) < X)
	    cost_l++;
	else
	    cost_r++;
    }

    cout << min(cost_l, cost_r) << endl;
    return 0;
}
