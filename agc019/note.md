# わけのわからん場所でコケて

```c++
#include <bits/stdc++.h>
#include <map> 
#include <tuple>
using namespace std;

int main()
{
    char siz[4] = {'Q', 'H', 'S', 'D'};
    vector<tuple<long long, int, char, long long>> tp;
    for (int i = 0; i < 4; i++) {
	long long cost;
	cin >> cost;
	long long litter_2; int size; char c;
	if (i == 0) {
	    c = 'Q';
	    size = 25;
	}
	if (i == 1) {
	    c = 'H';
	    size = 50;
	}
	if (i == 2) {
	    c = 'S';
	    size = 100;
	}
	if (i == 3) {
	    c = 'D';
	    size = 200;
	}
	litter_2 = cost * 100 / size;
	tp.push_back(make_tuple(litter_2, size, c, cost));
    }

    sort(tp.begin(), tp.end());

//    いいかんじ
//    for (int i = 0; i < 4; i++){
//	cout << " " << get<0>(tp[i]);
//	cout << " " << get<1>(tp[i]);
//	cout << " " << get<2>(tp[i]);
//	cout << " " << get<3>(tp[i]);
//	cout << endl;
//    }
//
//_45_2_D_90
//_60_0.5_H_30
//_70_1_S_70
//_80_0.25_Q_20
//

    int capa;
    cin >> capa;
    long long ans = 0;

    for (int i = 0; i < 4; i++) {
	long long tmp;
	tmp = capa / get<1>(tp[i]);
	capa = capa % (long long)(get<1>(tp[i]));
	ans += tmp * get<3>(tp[i]);
    }

    cout << ans << endl;
    return 0;
}

```

```c++
    int capa;
    cin >> capa;
    long long ans = 0;

    for (int i = 0; i < 4; i++) {
	long long tmp;
	tmp = capa / get<1>(tp[i]);
	capa = capa % (long long)(get<1>(tp[i]));
	ans += tmp * get<3>(tp[i]);
    }
```

上記の部分で値がきちんと渡せていない

結果

```bash
[INFO] sample-3
[INFO] time: 0.002932 sec
[FAILURE] WA
input:
10_100_1000_10000
1

output:
0

expected:
40


[INFO] sample-4
[INFO] time: 0.002915 sec
[FAILURE] WA
input:
12345678_87654321_12345678_87654321
123456789

output:
15241603688460

expected:
1524157763907942


``` クソでか値は渡せてる（正しく処理はできていない）
小さい値がわたせていない（わけわかめ）
