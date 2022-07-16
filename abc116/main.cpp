#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int S;
    cin >> S;
    vector<int> a(1000000);

    a.at(0) = S;
    for (int i = 0; i < 1000000; i++) {
	int tmp = 0;
	if (a.at(i)%2 == 0)
	    tmp = a.at(i)/2;
	else
	    tmp = 3*a.at(i) + 1;
	if(i == 0 || find(a.begin(), a.end(), tmp) == a.end())
	    a.at(i+1) = tmp;
	else{
	    cout << i + 2 <<endl; // iterater bgin from 0 (so, +1), and add 1 more for tmp
	    return 0;
	}
    }
    return 0;
}

/*
 * https://youtu.be/U3wtVmwxVoI?t=1594
 */
