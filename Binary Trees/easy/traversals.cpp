// This code is of inorder, preorder, postorder traversals in a binary tree

//    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    stack<pair<TreeNode*, int>> st;
    vector<vector<int>> ans;
    vector<int> pre, in, post;
    st.push({root,1});
    if(root == NULL)
      return {};
    while(!st.empty()){
        auto it = st.top();
        st.pop();

        if(it.second == 1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->left != NULL){
              st.push({it.first->left,1});
            }
        }
        else if( it.second == 2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->right != NULL){
              st.push({it.first->right, 1});
            }
        }
        else{
            post.push_back(it.first->data);
        }
    }
    ans.push_back(in);
    ans.push_back(pre);
    ans.push_back(post);
    return ans;
}
