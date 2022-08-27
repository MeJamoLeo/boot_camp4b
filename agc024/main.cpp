#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, K;
    cin >> A >> B >> C >> K;
    
    long long a, b, c;
    for (int i = 0; i < K; i++) {
	a = B + C;
	b = A + C;
	c = A + B;
        
	A = a;
	B = b;
	C = c;
    }

    cout << A - B << endl;
    return 0;
}
