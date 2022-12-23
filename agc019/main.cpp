#include <bits/stdc++.h>
#include <map> 
#include <tuple>
using namespace std;

int main()
{ long long Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;

    // Nは整数 => Quoter, Halfは必ず偶数個,買わないといけない
    // Qの場合, H = min(H, 2*Q)とすることで，Qの存在を無視できる
    // 同様に，Sの場合, S = min(S, 2*H)とすることで，Hの存在を無視できる
    //
    // 上記をまとめると
    H = min(H, 2 * Q);
    S = min(S, 2 * H);

    // 2*S < D の場合，1Lのサイズだけを買ったほうが安い
    // 2*S > D の場合，2Lのサイズを買ったほうが安い
    if (2*S <= D)
	cout << N * S << endl;
    else
	cout << N/2 * D +  N%2 * S << endl;
    return 0;
}
