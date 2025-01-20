// This is a DP code for Minimum subset sum difference (gfg problem)

// EXAMPLE

// Input: arr[] = [1, 6, 11, 5]
// Output: 1
// Explanation: 
// Subset1 = {1, 5, 6}, sum of Subset1 = 12 
// Subset2 = {11}, sum of Subset2 = 11 
// Hence, minimum difference is 1.  

// Input: arr[] = [1, 4]
// Output: 3
// Explanation: 
// Subset1 = {1}, sum of Subset1 = 1
// Subset2 = {4}, sum of Subset2 = 4
// Hence, minimum difference is 3.

// Input: arr[] = [1]
// Output: 1
// Explanation: 
// Subset1 = {1}, sum of Subset1 = 1
// Subset2 = {}, sum of Subset2 = 0
// Hence, minimum difference is 1.

int minDifference(int arr[], int n){
  int sum = 0;
  for(int i = 0; i<n ; i++){
    sum+=arr[i];
  }
  int dp[n+1][sum+1];
  for(int i = 0;i<n+1;i++){
    for(int j = 0;j<sum+1;j++){
      if(i == 0){
        dp[i][j] = 0;
      }
      if(j == 0){
        dp[i][j] = 1;
      }
    }
  }

  for(int i = 1;i<n+1;i++){
    for(int j = 1;j<sum+1;j++){
      if(arr[i-1] <= sum){
        dp[i][j] = dp[i-1][sum - arr[i-1]] || dp[i-1][j];
      }
      else{
        dp[i][j] = dp[i-1][j];
      }
    }
  }

  int ans = INT_MAX;
  for(int j = 0;j<sum+1;j++){
    if(dp[n][j] == 1){
      ans = min(ans, abs(sum - 2 * j));
    }
  }
  return ans;
}
