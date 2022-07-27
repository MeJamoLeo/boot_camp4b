What I had to know
    - estimate the amount of circulation, which means like "Can I use all-search?"
    -[`next_permutation()` method](https://qiita.com/e869120/items/518297c6816adb67f9a5#3-23-next_permutation)
	directory order => next_permutation
    - do while
	```cpp
	#include <algorithm>
	#include <iostream>
	    using namespace std;
	    int main() {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];

		cout << endl;
		do {
		    for (int i = 0; i < n; i++){
			if (i) cout << ",";
			cout << a[i];
		    }
		    cout << endl;
		}
		while(next_permutation(a, a + n));
	    }
	```
	
	```sh
	>>> ./a.out
	3
	1 2 3

	1,2,3
	1,3,2
	2,1,3
	2,3,1
	3,1,2
	3,2,1
	```


N = 3
A[3] = {1, 2, 3}
mp[A] = mp.size() // mp.size = 0
mp = {{1,2,3}:0}

mp[A] = mp.size() // mp.size = 1
mp = {{1,2,3}:0, {1,3,2}:1}

mp[A] = mp.size() // mp.size = 2
mp = {{1,2,3}:0, {1,3,2}:1, {2,1,3}:2}
