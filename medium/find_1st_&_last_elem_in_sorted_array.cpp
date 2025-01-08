// Leetcode problem no 34
// Find first and last occurence of an element in a sorted array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = bound(nums, target, true);
        int right = bound(nums, target, false);
        return {left, right};
    }

private:
    int bound(vector<int>& nums, int target, bool isLeft) {
        int left = 0;
        int right = nums.size() - 1;
        int ans = -1;
        while (left <= right) {
            int mid = left + ((right - left) / 2);
            if (nums[mid] == target) {
                ans = mid;
                if (isLeft) {
                    right = mid - 1;
                } else
                    left = mid + 1;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else right = mid - 1;
        }
        return ans;
    }
};
