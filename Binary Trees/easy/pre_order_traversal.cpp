// This code is for Pre-Order Traversal

void preorder(Node* root, vector<int>& arr){

  if(root ==  nullptr){
    return ;
  }
  arr.push_back(root->data);
  preorder(root->left, arr);
  preorder(root->right, arr);
}

vector<int> preOrder(Node* root){
  vector<int> ans;
  preorder(root, ans);
  return ans;
}
