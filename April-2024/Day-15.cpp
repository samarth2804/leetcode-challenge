# Sum Root to Leaf Numbers #
# Problem Link: https://leetcode.com/problems/sum-root-to-leaf-numbers/description/

int findSum(TreeNode* root,int cur){
    if(!root) return 0;
    cur = cur * 10 + root -> val;                
    if(!root -> left && !root -> right)           
        return cur;
    return findSum(root -> left, cur) +findSum(root -> right, cur);

}

int sumNumbers(TreeNode* root) {
    return findSum(root,0);
}