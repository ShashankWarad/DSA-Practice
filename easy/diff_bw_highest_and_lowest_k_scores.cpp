// Minimum Difference Between Highest and Lowest of K Scores

// Example 1 : Input: nums = [9,4,1,7], k = 2
// Output: 2
// Explanation: There are six ways to pick score(s) of two students:
// - [9,4,1,7]. The difference between the highest and lowest score is 9 - 4 = 5.
// - [9,4,1,7]. The difference between the highest and lowest score is 9 - 1 = 8.
// - [9,4,1,7]. The difference between the highest and lowest score is 9 - 7 = 2.
// - [9,4,1,7]. The difference between the highest and lowest score is 4 - 1 = 3.
// - [9,4,1,7]. The difference between the highest and lowest score is 7 - 4 = 3.
// - [9,4,1,7]. The difference between the highest and lowest score is 7 - 1 = 6.
// The minimum possible difference is 2.


class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
      int n = nums.size();
      if(n == 1) return 0;
      sort(nums.begin(), nums.end());
      int minis = nums[n-1];
      for(int i = 0; i < n - k + 1 ; i++){
        minis = min(minis, nums[i+k-1]-nums[i]);
      }
      return minis;
    }
};
