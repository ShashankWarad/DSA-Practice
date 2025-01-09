// In this problem 2 stacks are used to get the Post Order Traversal using Iterative method

vector<int> postOrderTraversalIterativr(TreeNode* root){
  vector<int> ans;
  if(root == NULL) return ans;
  stack<TreeNode*> st1, st2;
  st1.push(root);
  while(!st1.empty())
  {
    root = st1.top();
    st1.pop();
    if(root->left != NULL) st2.push(root->left);
    if(root->right != NULL) st2.push(root->right);
  }
  while(!st2.empty()){
    ans.push_back(st2.top()->val);
    st2.pop();
  }
  return ans;
}
