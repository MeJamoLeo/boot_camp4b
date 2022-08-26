#include <bits/stdc++.h>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    map<int, int> mp;
    int max = 0;
    for (int i = 0; i < N; i++)
    {
	cin >> A[i];
	mp[A[i]]++; 
	if (max < A[i]) 
	    max = A[i];
    };

    if (mp[max] >= 2)
	for (int i = 0; i < N; i++) cout << max << endl;
    else 
    {
	for (int i = 0; i < N; i++)
	{
	    if (A[i] == max)
	    {
		vector<int> tmp = A;
		sort(tmp.begin(), tmp.end());
		cout << tmp[N - 2] << endl;
	    }
	    else
		cout << max << endl;
	}
    }
    return 0;
}
