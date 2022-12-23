#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  int H[N];
  for (int i = 0; i < N; i++)
    cin >> H[i];

  int max = 0;
  int count = 0;
  for (int i = 0; i + 1 < N; i++) {
    if (H[i] >= H[i + 1]) {
      count++;
      if (i + 1 == N - 1 && count > max)
        max = count;
    } else {
      if (count > max)
        max = count;
      count = 0;
    }
  }

  cout << max << endl;
  return 0;
}
