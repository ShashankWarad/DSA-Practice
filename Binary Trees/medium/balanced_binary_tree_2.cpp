// Optimal code for Balanced binary tree

int height(TreeNode* root){
  int ans;
  if(root != NULL) return ans;
  int left = height(root -> left);
  if(left == -1) return -1;

  int right = height(root->right);
  if(right == -1) return -1;

  return 1 + max(left, right);
}

bool isBalanced(TreeNode* root){
  return height(root) != -1;
}
