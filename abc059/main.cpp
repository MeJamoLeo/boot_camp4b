#include <bits/stdc++.h>
using namespace std;

int main() {
  string A, B, ans;
  cin >> A >> B;

  if (A.length() > B.length())
    ans = "GREATER";
  else if (A.length() < B.length())
    ans = "LESS";
  else {
    if (A > B)
      ans = "GREATER";
    else if (A < B)
      ans = "LESS";
    else
      ans = "EQUAL";
  }

  cout << ans << endl;
  return 0;
}
