// Print the maximum number of nodes on level i of a binary tree.

class Solution {
  public:
    int countNodes(int i) {
        // your code here
        if(i == 0) return 0;
        int ans = 1;
        for(int j = 1; j < i; j++){
            ans = ans * 2;
        }
        return ans;
    }
};
