// In this problem the code is of Pre-Order traversal using a Stack i.e iterative method

vector<int> preOrderTraversaliterative(TreeNode* root){
  vector<int> ans;
  stack<TreeNode*> st;
  if(root == NULL) return ans;
  st.push(root);
  while(!st.empty()){
    TreeNode* node = st.top();
    st.pop();
    if(node->right != NULL) st.push(node->right);
    if(node->left != NULL) st.push(node->left);
    ans.push_back(node->data);
  }
  return ans;
};
