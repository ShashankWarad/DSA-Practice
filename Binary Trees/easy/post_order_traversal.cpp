// Problem on Post-Order Traversal

void postorder(Node* root, vector<int>& arr){
  if(root == nullptr){
    return;
  }
  postorder(root->left, arr);
  postorder(root->right, arr);
  arr.push_back(root->data);
}

vector<int> postOrderTraversal(Node* root){
  vector<int> ans;
  postorder(root, ans);
  return ans;
}
