#include <bits/stdc++.h>
using namespace std;

int is_prime(int n);

int main() {
    int X;
    cin >> X;
    while (!is_prime(X))
	X++;
    cout << X << endl;
    return 0;
}

int is_prime(int n) {
    long int i = 2;
    if (n < i)
	return 0;
    while (i * i <= n){
	if (n % i == 0)
	    return 0;
	i++;
    }
    return 1;
}
