// This is a Dp code for subset sum problem 

// Input: arr[] = [3, 34, 4, 12, 5, 2], target = 9
// Output: true 
// Explanation: Here there exists a subset with target sum = 9, 4+3+2 = 9.
// Input: arr[] = [3, 34, 4, 12, 5, 2], target = 30
// Output: false
// Explanation: There is no subset with target sum 30.
// Input: arr[] = [1, 2, 3], sum = 6
// Output: true
// Explanation: The entire array can be taken as a subset, giving 1 + 2 + 3 = 6.

class Solution {

  bool subset(vector<int>& arr, int sum , int n){
      int dp[n+1][sum+1];
      for(int i = 0; i < n+1;i++){
        for(int j = 0; j< sum+1; j++){
          if(i == 0){
            dp[i][j] = false;
        }
          if(j == 0){
            dp[i][j] = true;
          }
      }

      for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < sum+1; j++){
          if(arr[i-1] <= sum){
            dp[i][j] = dp[i-1][j - arr[i-1]] || dp[i-1][j];
          }
          else{
            dp[i][j] = dp[i-1][j];
          }
        }
      }
        return dp[n][sum];
  }
  public:
    bool isSubsetSum(vector<int>& arr, int target){
      return subset(arr, target, arr.size());
    }
}
