# Add One Row to Tree (leetcode 623)#
# Problem Link: https://leetcode.com/problems/add-one-row-to-tree/description/

TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    if(depth==1){
        TreeNode *temp=new TreeNode(val);
        temp->left=root;
        return temp;
    }
    if(!root) return root;

    queue<TreeNode*> q;
    q.push(root);
    --depth;   
    while(depth>1 && !q.empty()){
        int n=q.size();
        TreeNode *temp;
        for(int i=0;i<n;++i){
            temp=q.front();
            q.pop();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        --depth;
    }

    TreeNode *temp, *t1, *t2;
    while(!q.empty()){
        temp=q.front();
        q.pop();
        t1=new TreeNode(val);
        t1->left=temp->left;
        t2=new TreeNode(val);
        t2->right=temp->right;
        temp->left=t1;
        temp->right=t2;
    }

    return root;
}