// This is a recursion code for coin change 1 where we find number of ways coins can be added to get a sum

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
    int subset(vector<int>& coins, int sum, int n){
        if(sum == 0) return 1;
        
        if(sum < 0 || n == 0) return 0;
        
        return subset(coins, sum - coins[n-1], n) + subset(coins, sum, n-1);
    }
  public:
    int count(vector<int>& coins, int sum) {
        return subset(coins, sum, coins.size());
    }
};
