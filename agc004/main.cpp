#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long nums[3];
    for (int i = 0; i < 3; i++) cin >> nums[i];
    sort(nums, nums + 3, greater<long long>());

    long long ans;
    if (
	(nums[0] % 2 == 0) ||
	(nums[1] % 2 == 0) ||
	(nums[2] % 2 == 0) 
       )
	ans = 0;
    else
	ans = nums[1] * nums[2]; // ここがあるから数字の桁が大きい型を使う必要ある(long int, long long)

    cout << ans << endl;
}


