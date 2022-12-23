#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int ans = 0;

  for (int i = 1; i <= N; ++i) {
    int tmp = i;
    int judge_n = 0;

    while (tmp > 9) {
      judge_n += tmp % 10;
      tmp /= 10;
    }
    judge_n += tmp;

    if (A <= judge_n && judge_n <= B)
      ans += i;
  }
  cout << ans << endl;
  return 0;
}
