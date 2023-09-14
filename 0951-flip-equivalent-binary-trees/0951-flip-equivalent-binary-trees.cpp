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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if (root1 == NULL and root2 == NULL) {
		// both the trees are empty
		return true;
	}

	// atleast one of the trees is non-empty

	if (root1 == NULL or root2 == NULL) {
		return false;
	}

	// both the trees are non-empty

	if (root1->val != root2->val) {
		return false;
	}

	// recursive case

	// make a decision for the root node

	// 1. perform the flip operation on the root node
	swap(root1->left, root1->right);
	if (flipEquiv(root1->left, root2->left) and flipEquiv(root1->right, root2->right)) {
		return true;
	}

	// 2. do not perform the flip operation on the root node
	swap(root1->left, root1->right); // backtracking step
	if (flipEquiv(root1->left, root2->left) and flipEquiv(root1->right, root2->right)) {
		return true;
	}

	return false;

        
    }
};