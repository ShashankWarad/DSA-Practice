// Diameter of BT - Optimal Code

int height(TreeNode* root, int& diameter){
  if(root == NULL) return 0;

  int left = height(root->left, diameter);
  int right = height(root->right, diameter);

  diameter = max(diameter, left + right);

  return 1 + max(left, right);
}

int diameterOfBinaryTree(TreeNode* root){
  int diameter = 0;
  height(root, diameter);
  return diameter;
}
