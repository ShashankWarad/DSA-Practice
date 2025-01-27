
// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]

class Solution {
    void solve(vector<string>& ans, int open, int close, string op){
        if(open == 0 && close == 0){
            ans.push_back(op);
            return;
        }

        if(open != 0){
            string op1 = op;
            solve(ans, open -1, close, op1 + '(');
        }
        if(close > open){
            string op1 = op;
            solve(ans, open , close-1, op1 + ')');
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        string op = "";
        vector<string> ans;
        solve(ans, open,close,op);
        return ans;
    }
};
