// Leetcode problem no 27
// Remove Elements

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = nums.size() - 1;
        while(i <= j){
            if(nums[i] != val)
            i++;
            else if (nums[j] == val)
            j--;
            else {
                swap(nums[i],nums[j]);
            }
        }
        return i;
    }
};
