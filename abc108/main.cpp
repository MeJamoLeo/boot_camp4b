#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = c - a;
    int y = d - b;

    cout << c-y << " ";
    cout << d+x << " ";
    cout << a-y << " ";
    cout << b+x << endl;
}
