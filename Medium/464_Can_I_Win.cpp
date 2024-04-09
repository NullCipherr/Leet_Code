class Solution {
public:
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        if (maxChoosableInteger >= desiredTotal) return true;
        if ((maxChoosableInteger * (maxChoosableInteger + 1)) / 2 < desiredTotal) return false;
        vector<int> dp(1 << maxChoosableInteger, -1);
        return canWin(maxChoosableInteger, desiredTotal, 0, dp);
    }

private:
    bool canWin(int length, int total, int state, vector<int>& dp) {
        if (dp[state] != -1) return dp[state];
        
	for (int i = 0; i < length; ++i) 
	{
            if (!(state & (1 << i))) {
                if (total <= i + 1 || !canWin(length, total - (i + 1), state | (1 << i), dp)) 
		{
                    dp[state] = 1 ;
                    return true ;
                }
            }
        }
        dp[state] = 0 ;
        return false ;
    }
};