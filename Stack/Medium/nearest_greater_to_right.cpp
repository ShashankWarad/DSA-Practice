// Input: arr[] = [1, 3, 2, 4]
// Output: [3, 4, 4, -1]
// Explanation: The next larger element to 1 is 3, 3 is 4, 2 is 4 and for 4, since it doesn't exist, it is -1.

class Solution {
  public:
    // Function to find the next greater element for each element of the array.
    vector<int> nextLargerElement(vector<int>& arr) {
        vector<int> ans;
        stack<int> st;
        
        for(int i = arr.size() - 1;i>=0;i--){
            if(st.size() == 0){
                ans.push_back(-1);
            }
            else if(st.size() > 0 and st.top() > arr[i]){
                ans.push_back(st.top());
            }
            else if(st.size() > 0 and st.top() <= arr[i]){
                while(st.size() > 0 and st.top() <= arr[i]){
                    st.pop();
                }
                
                if(st.size() == 0){
                    ans.push_back(-1);
                }else{
                    ans.push_back(st.top());
                }
            }
            st.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
