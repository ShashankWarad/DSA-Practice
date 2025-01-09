// This is code for In-Order Traversal

void inorder(Node* root, vector<int>& arr){
  if(root == nullptr){
    return ;
  }
  inorder(root->left, arr);
  arr.push_back(root->data);
  inorder(root->right, arr);
}

vector<int> inOrdertraversal(Node* root){
  vector<int> ans;
  inorder(root, ans);
  return ans;
}
