class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n, 1e9);
        dp[n - 1] = 0;

        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = i + 1; j <= min(n - 1, i + nums[i]); j++)
            {
                dp[i] = min(dp[i], dp[j] + 1);
            }
        }
        return dp[0];
    }
};