#include<iostream>
#include<string>
#include<vector>
using namespace std;

string LongestPalindrome(string s)
{
	int m = s.size();
	if (m == 0)
		return "";

	vector<vector<int>> dp(m, vector<int>(m, 0));
	int start = 0;
	int length = 1;

	for (int i = 0; i < m; i++)
	{
		dp[i][i] = 1;
		if (i < m - 1)
		{
			if (s[i] == s[i + 1])
			{
				dp[i][i + 1] = 1;
				start = i;
				length = 2;
			}
		}
	}

	for (int len = 2; len <= m; len++)
	{
		for (int i = 0; i < m - len; i++)
		{
			int j = i + len;
			if (dp[i + 1][j - 1] == 1 && s[i] == s[j])
			{
				dp[i][j] = 1;
				if (j - i + 1 > length)
				{
					start = i;
					length = j - i + 1;
				}
			}
		}
	}

	return s.substr(start, length);

}

int LongestPalindrome()
{
	string* str = new string("abcddcbcc");
	cout << "longest palindrome: " << LongestPalindrome(*str) << endl;
	return 0;
}