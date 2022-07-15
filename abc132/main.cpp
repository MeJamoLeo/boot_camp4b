#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// oj t -c "./a.out" -d ./tests

int main() {
    int N;
    cin >> N;

    vector<int> problems(N);

    for (int i = 0; i < N; i++) {
	cin >> problems.at(i);
    }

    sort(problems.begin(), problems.end());
    cout << problems.at(N/2) - problems.at(N/2 - 1) << endl;
    return 0;
}

/**
 *
 * [1,2,3,4,5,6]
 * vec.at(4) = 5
 *
**/
