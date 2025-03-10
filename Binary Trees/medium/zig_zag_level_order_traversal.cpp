// Code to traverse a binary tree in zig zag level order traversal

vector<vecctor<int>> zigzagLevelOrder(TreeNode* root){
  vector<vector<int>> ans;
  if(root == NULL) return ans;
  queue<TreeNode* > q;
  q.push(root);
  while(!q.empty()){
    int size = q.size();
    vector<int> level;
    for(int i = 0; i < size; i++){
      TreeNode* node = q.front();
      q.pop();
      if(node->left != NULL) q.push(node->left);
      if(node->right != NULL) q.push(node->right);
      level.push_back(node->data);
    }
    ans.push_back(level);
  }
  for(int i = 1; i < ans.size(); i+=2){
    reverse(ans[i].begin(), ans[i].end());
  }
  return ans;
}
