// Code for finding the diameter of a binary tree

int diameter = 0; // Global Variable

int height(TreeNode* root){
  int ans = 0;
  if(root == NULL) return ans;

  int left = height(root->left);
  int right = height(root ->right);

  diameter = max(diameter , left + right);

  return 1 + max(left, right);
}

int diameterOfBinaryTree(TreeNode* root){
  height(root);
  return diameter;
}
