// Problem no 110 i.e Balanced binary tree

int height(TreeNode* root){
  int ans = 0;
  if(root == NULL) return ans;
  int left = height(root->left);
  int right = height(root->right);
  return 1 + max(left, right);
}

bool isBalanced(TreeNode* root){
  if(root == NULL) return true;
  int left = height(root->left);
  int right = height(root -> right);
  if(abs(left-right) > 1) return false;
  bool l = isBalanced(root->left);
  bool r = isBalanced(root->right);
  return l && r;
}
