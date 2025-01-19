// This is a recursion code for Subset sum problem 

// Input: arr[] = [3, 34, 4, 12, 5, 2], target = 9
// Output: true 
// Explanation: Here there exists a subset with target sum = 9, 4+3+2 = 9.

// Input: arr[] = [3, 34, 4, 12, 5, 2], target = 30
// Output: false
// Explanation: There is no subset with target sum 30.

class Solution {
  public: 
  bool subset(vector<int>& arr, int sum, int n){
    if(n == 0 && sum == 0) return true;

    if(n == 0 && sum != 0) return false;

    if(arr[n-1] > sum){
      return subset(arr, sum, n-1);
    }

    return subset(arr, sum - arr[n-1], n-1) || subset(arr, sum, n-1);
  }
  
  bool isSubsetSum(vector<int>& arr, int sum){
    return subset(arr, sum , arr.size());
  }
}
