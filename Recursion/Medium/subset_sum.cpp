// Input: arr[] = [2, 3]
// Output: [0, 2, 3, 5]
// Explanation: When no elements are taken then Sum = 0. When only 2 is taken then Sum = 2. When only 3 is taken then Sum = 3. When elements 2 and 3 are taken then Sum = 2+3 = 5.

class Solution {
    void solve(int i, vector<int>& arr, vector<int>& op, int ans){
        if(arr.size() == i){
            op.push_back(ans);
            return;
        }
        
        int ans1 = ans;
        int ans2 = ans;
        
        solve(i+1, arr, op, ans1);
        solve(i+1, arr, op, ans2 + arr[0]);
    }
  public:
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> op;
        int ans = 0;
        solve(0, arr, op, ans);
        return op;
    }
};
