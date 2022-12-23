#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

int main()
{
    // おまじない from qiita.com
    srand((unsigned)time(NULL));


    // // 雛形
    // // {N: Nは2以上, 10^18以下}
    // long long N = rand() % (long long)pow(10,18) + 2;
    // // {B: Bは2以上, N以下}
    // long long B = rand() % N + 2;
    // // {A: Aは1以上, B以下}
    // long long A = rand() % B + 1;

    //cout << rand() << endl;
    //return 0;

    int sample_cnt = 10;
    for (int i = 0; i < sample_cnt; i++)
    {
	long long low, high;
	// {N: Nは2以上, 10以下}
	low = 2;
	high = 10;
	long long N = rand() % (high-low +1) + low;

	// {B: Bは2以上, N以下}
	low = 2;
	high = N;
	long long B = rand() % (high-low +1) + low;

	// {A: Aは1以上, B以下}
	low = 1;
	high = B;
	long long A = rand() % (high-low +1) + low;

	cout << A << " ";
	cout << B << " ";
	cout << N << endl;


	// サンプルファイルを作りたい
	
    }
    return 0;
}
