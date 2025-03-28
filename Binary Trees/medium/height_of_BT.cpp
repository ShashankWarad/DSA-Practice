// Problem to find the depth of a Binary Tree

int maxDepth(TreeNode* root){
  if(root == NULL) return 0;
  int leftDepth = maxDepth(root->left);
  int rightDepth = maxDepth(root->right);
  return 1 + max(leftDepth, rightDepth);
}
