// This code is a recursion code and will not pass all the test case in leetcode problem no 416
//-------------------------------------------------------------------------------------------------------
// Example 1:

// Input: nums = [1,5,11,5]
// Output: true
// Explanation: The array can be partitioned as [1, 5, 5] and [11].
//--------------------------------------------------------------------------------------------------------
// Example 2:

// Input: nums = [1,2,3,5]
// Output: false
// Explanation: The array cannot be partitioned into equal sum subsets.

class Solution {
  private : 
    bool subset(vector<int>& nums, int sum, int n){
      if(sum == 0 && n == 0) return true;

      if(sum != 0 && n == 0) return false;

      if(nums[n-1] <= sum){
        return subset(nums, sum, n-1) || subset(nums, sum - nums[n-1], n-1);
      }

      return subset(nums, sum, n-1);
    }

  public : 
    bool canPartition(vector<int>& nums){
      int n = nums.size();
      int sum = 0;
      for(int i = 0; i < n ; i++){
        sum += 2;
      }

      if(sum % 2 != 0) return false;

      else{
        return subset(nums, sum/2, n);
      }
    }
}
