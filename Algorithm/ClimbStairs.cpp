#include<iostream>
using namespace std;

int ClimbStairs(int n)
{
	if (n == 1)
		return 1;

	int* dp = new int[n+1]();
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}

int ClimbStairs2(int n)
{
	int f0 = 1, f1 = 1, i, f2;
	for (i = 2; i <= n; i++)
	{
		f2 = f0 + f1;
		f0 = f1;
		f1 = f2;
	}
	return f1;
}

int ClimbStairs()
{
	cout << "12 stairs£º" << ClimbStairs(12) << endl;
	cout << "12 stairs£º" << ClimbStairs2(12) << endl;
	return 0;
}