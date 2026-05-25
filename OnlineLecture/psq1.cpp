#include<iostream>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val) {
        this->val = val;
    }
};

bool inorder(TreeNode* root, int target) {
    // base case - since we are using recursion
    if(root==nullptr) return true;

    bool leftAns = inorder(root->left, target);
    if(leftAns==false) return false;

    if(root->val!=target) return false;

    bool rightAns = inorder(root->right, target);
    if(rightAns==false) return false;

    return true;
}

bool is_tree_univalued(TreeNode* root) {
    // corner / edge case
    if(root==nullptr) return true;
    
    // when our code comes at this place
    // we know that root is not NULL
    int target = root->val;

    return inorder(root, target);
}

int main() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(1);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(2);

    cout<<is_tree_univalued(root)<<endl;
    return 0;
}