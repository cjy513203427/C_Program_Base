#pragma once
#include<vector>
using namespace std;
class Solution {
public:
	bool canPartition(vector<int>& nums) {
		bool res = false;
		int sum = 0;
		int m = nums.size();
		for (int i = 0; i < m; i++) {
			sum += nums[i];
		}
		if ((sum & 1) == 1) {
			return false;
		}
		sum /= 2;
		bool **dp = new bool *[nums.size() + 1];
		for (int i = 0; i <= m; i++) {
			dp[i] = new bool[sum + 1];
		}
		for (int i = 0; i <= m; i++) {
			dp[i][0] = true;
		}
		for (int i = 1; i <= sum; i++) {
			dp[0][i] = false;
		}
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= sum; j++) {
				if (j >= nums[i - 1]) {
					dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
				}
				else {
					dp[i][j] = dp[i - 1][j];
				}
			}
		}
		res = dp[m][sum];

		for (int i = 0; i <= m; i++) {
			delete[] dp[i];
		}
		delete[] dp;
		return res;
	}
};