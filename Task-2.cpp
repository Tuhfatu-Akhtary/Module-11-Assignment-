struct TreeNode {        //Tree Declaration
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr || root->val == val) {
            return root;  // If the tree is empty or we've found the value, return root
        }
        
        if (val < root->val) {
            return searchBST(root->left, val);  // Search the left subtree if val is smaller
        } else {
            return searchBST(root->right, val);  // Search the right subtree if val is greater
        }
    }
};


Time Complexity: O(n)
Space Complexity: O(n)