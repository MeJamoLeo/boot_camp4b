#include <bits/stdc++.h>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    long long N, A, B;
    cin >> N >> A >> B;

    // 偶奇が一致している場合 => 互いに中央に移動
    if ((B - A) % 2 == 0)
    {
	cout << (B-A-1)/2 + 1 << endl;
	return 0;
    }

    // 偶奇が一致していない場合 (クソきたねえコードを書き直す)

    // 差分が１のとき 
    // 二人で端っこまで移動
    if (B-A == 1)
    {
	cout << min(N-B, A-1) + 1 << endl;
	return 0;
    }

    // 差分が２以上のとき
    // A, Bのどちらか端に近い方の卓に移動する．
    // 偶奇をいっちさせる.(a.k.a １度おなじ卓に止まる)
    // 中央に移動.
    long long additional_n;
    if (A-1 < N-B) // 左端の方が近い場合
    {
	additional_n = A-1;
	B -= A;
    }
    else // 右端の方が近い場合
    {
	additional_n = N-B;
	B = N;
	A += additional_n;
    }

    cout << (B-A-1)/2 + 1 + additional_n << endl;
    return 0;
}
