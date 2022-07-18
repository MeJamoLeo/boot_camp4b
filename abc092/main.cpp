#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D, X;
    cin >> N >> D >> X;
    vector<int> A(N);
    int res = 0;


    for (int i = 0; i < N; i++) {
	int A;
	cin >> A;

	int j = 1;
	while ((j - 1) * A + 1 <= D) {
	    res++;
	    //cout << "A:" << A << "  time:" << j <<  "  day:" << (j-1)*A + 1  << "  res: " << res <<endl;
	    j++;
	}
	//cout << endl;
    }

    res += X;

    cout << res << endl;
    return 0;
}
