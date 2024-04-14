# Sum of Left Leaves (Leetcode 404) #
# Problem Link: https://leetcode.com/problems/sum-of-left-leaves/

bool isLeaf(TreeNode* root){
    if(!root) return false;
    if(root->left==nullptr && root->right==nullptr) return true;
    return false;
}
int sumOfLeftLeaves(TreeNode* root) {
    if(!root || isLeaf(root)) return 0;
    int sum=0;
    if(root->left){
        if(isLeaf(root->left)){sum+=root->left->val;}
        else{
            sum+=sumOfLeftLeaves(root->left);
        }
    }
    if(root->right && isLeaf(root->right)==false){
        sum+=sumOfLeftLeaves(root->right);
    }
    
    return sum;
}