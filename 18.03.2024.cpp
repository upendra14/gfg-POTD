class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
    vector<int>ans;
    queue<Node*>q{{root}};

    while(!q.empty()){
    auto node=q.front();q.pop();
    if(node){
    ans.push_back(node->data);
    q.push(node->left);
    q.push(node->right);
   }
 }
  return ans;
    }
};
