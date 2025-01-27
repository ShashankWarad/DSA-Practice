// Example 1:

// Input:
// N = 3
// Output:
// 000 , 001 , 010 , 100 , 101
// Explanation:
// None of the above strings contain consecutive 1s. "110" is not an answer as it has '1's occuring consecutively. 

class Solution{
    void solve(vector<string>& ans, string op, int n){
        if(n == 0){
            ans.push_back(op);
            return;
        }
        
        string op1 = op;
        solve(ans, op1 + '0', n-1);
        
        if(op.empty() || op.back() != '1'){
            string op2 = op;
            solve(ans, op2 + '1', n-1);
        }
    }
public:
    vector<string> generateBinaryStrings(int num){
        //Write your code
        string op = "";
        vector<string> ans;
        solve(ans, op, num);
        return ans;
    }
};
