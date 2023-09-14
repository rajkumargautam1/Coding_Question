/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
       // base case 
    if(root == NULL){
        return false;
    }
    if(root->left ==NULL and root->right == NULL){
        if(root->val == targetSum){
            return true;
        }
    }

    //recursive case 


    // check in the leftsubtree if there exists a rorot to leaf path sum upto targetsum-root->val

    if(hasPathSum(root->left, targetSum-root->val)){
        // you've found a root to leaf path in the given tree that sum up to targetsum
        return true;

    }
    // 2. recursive check int the rightsubtree if there exists a root- to-leaf path that sum up to the targetsum

    if (hasPathSum(root->right, targetSum-root->val)){
        return true;
    }
    return false;
    }
};