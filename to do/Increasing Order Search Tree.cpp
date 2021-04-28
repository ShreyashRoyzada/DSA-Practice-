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
    
    vector<TreeNode*> list;
    TreeNode* increasingBST(TreeNode* root) {
        
        if(root == NULL) return root;
        
        inorder(root);
        
        TreeNode* newroot = new TreeNode;
        TreeNode* ret = newroot;
        if(list.size()==1)
        {
            return root;
        }
        for(int i = 0; i<list.size()-1; i++)
        {
            
            newroot->right = list[i+1];
            newroot->left = NULL;
            newroot->val = list[i]->val;
            newroot = newroot->right;
        }
        return ret;
    }
    
    void inorder(TreeNode* r){
        
        if(r == NULL)
            return;
        
        inorder(r->left);
        list.push_back(r);
        inorder(r->right);
    }
    
};
