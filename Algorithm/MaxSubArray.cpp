#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<typename T>
int MaxSubArray(vector<T>& nums)
{
	T* dp = new T[nums.size()]();

	dp[0] = nums[0];
	int result = dp[0];

	for (int i = 1; i < nums.size(); i++)
	{
		dp[i] = max(dp[i - 1] + nums[i], nums[i]);
		result = max(result, dp[i]);
	}

	return result;
}

int MaxSubArray()
{
	cout << "MaxSubArray()" << endl;
	return 0;
}