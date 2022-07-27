#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    map<int[], int> mp;
    do {
	for (int i = 0; i < n; i++){
	    if (i) cout << ",";
	    cout << a[i];
	}
	cout << endl;
    }
    while(next_permutation(a, a + n));
}
