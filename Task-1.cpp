struct TreeNode {     //Tree declaration
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int height(TreeNode* root) {
        if (root == nullptr) {    //If the tree is empty return 0
            return 0;
        }
        int leftHeight = height(root->left);   
        int rightHeight = height(root->right);
        return 1 + max(leftHeight, rightHeight);
    }
};


Time Complexity : O(n)
Space Complexity O(n)  