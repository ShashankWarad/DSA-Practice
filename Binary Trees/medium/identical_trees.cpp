// Code to check if two binary trees are identical or not

bool isSameTree(TreeNode* p, TreeNode* q){
  if(p == NULL && q == NULL) return true;

  if(p == NULL || q == NULL) return false;

  return ((p->data == q->data) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
}
