//Using Recursion

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root){
            invertTree(root->left);
            invertTree(root->right);
            swap(root->left,root->right);
        }
        return root;
    }
};



class Solution {
public:
    void help(TreeNode* root){
        if(root==NULL) return;
        help(root->left);
        help(root->right);
        auto temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
    TreeNode* invertTree(TreeNode* root) {
        help(root);
        return root;
    }
};

//Using Stack

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*>stk;
        stk.push(root);
        while(!stk.empty()){
            TreeNode* p=stk.top();
            stk.pop();
            if(p){
                stk.push(p->left);
                stk.push(p->right);
                swap(p->left,p->right);
            }
        }
        return root;
    }
};