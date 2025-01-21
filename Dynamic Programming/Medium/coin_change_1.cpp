// UNBOUNDED KNAPSACK

// This is a Dp Code for Coin change problem 1 where number of ways coins can be added to get a sum

// Examples:

// Input: coins[] = [1, 2, 3], sum = 4
// Output: 4
// Explanation: Four Possible ways are: [1, 1, 1, 1], [1, 1, 2], [2, 2], [1, 3].
// Input: coins[] = [2, 5, 3, 6], sum = 10
// Output: 5
// Explanation: Five Possible ways are: [2, 2, 2, 2, 2], [2, 2, 3, 3], [2, 2, 6], [2, 3, 5] and [5, 5].
// Input: coins[] = [5, 10], sum = 3
// Output: 0
// Explanation: Since all coin denominations are greater than sum, no combination can make the target sum.

class Solution {
public:
int count(vector<int>& coins, int sum){
  int n = coins.size();
  int dp[n+1][sum+1];
  for(int i = 0;i<n+1;i++){
    for(int j = 0;j<sum+1;j++){
      if(i == 0) dp[i][j] = 0;
      if(j == 1) dp[i][j] = 1;
    }
  }
  for(int i = 1;i<n+1;i++){
    for(int j = 1;j<sum+1;j++){
      if(coins[n-1] <= j){
        dp[i][j] = dp[i][j-coins[i-1]]+dp[i-1][j];
      }
      else{
        dp[i][j] = dp[i-1][j];
      }
    }
  }
  return dp[n][sum];
 }
}
















