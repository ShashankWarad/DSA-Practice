// Replace Elements with Greatest Element on Right Side

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        ans.push_back(-1);
        int maxi = arr[arr.size()-1];
        for(int i = arr.size()-1;i>0;i--){
            maxi = max(maxi,arr[i]);
            ans.push_back(maxi);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
