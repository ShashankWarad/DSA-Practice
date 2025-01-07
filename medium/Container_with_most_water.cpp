// problem no 11 on leetcode
// Container with most water

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int ans = 0;
        int maxii ;
        while(i<j){
            maxii = min(height[i],height[j])*(j-i); 
            ans = max(ans, maxii);
            if(height[i]<height[j]){
                i++;
            }
            else j--;
        }
        return ans;
    }
};
