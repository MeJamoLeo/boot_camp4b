#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    for (int i = 1; i <= 10000; ++i) 
    {
	if ((A == i * 8 / 100) && (B == i * 10 / 100))
	{
	    cout << i << endl;
	    return 0;
	}
    }


    cout << -1 << endl;
    return 0;
}
