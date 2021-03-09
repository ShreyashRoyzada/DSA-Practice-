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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        queue<TreeNode*> q;
        
        q.push(root);
        int ch = d-2;
        while(ch>0)
        {
            queue<TreeNode*> qq;
            while(q.size())
            {
                qq.push(q.front());
                q.pop();
            }
            while(qq.size())
            {
                if(qq.front()->left)
                {
                    q.push(qq.front()->left);
                }
                if(qq.front()->right)
                {
                    q.push(qq.front()->right);
                }
                qq.pop();
            }
            ch--;
        }
        if(ch<0)
        {
            TreeNode* o = new TreeNode();
            o->val = v;
            o->left = root;
            return o;
        }
        else{
        while(q.size())
        {
            TreeNode* l = NULL;
            TreeNode* r = NULL;
            TreeNode* ll = new TreeNode();
            TreeNode* rr = new TreeNode();
            if(q.front()->left!=NULL)
            {
                l = q.front()->left;
            }
            if(q.front()->right!=NULL)
            {
                r = q.front()->right;
            }
            ll->val = v;
            rr->val = v;
            // q.front()->left->val = v;
            q.front()->left = ll;
            ll->left = l;
            // q.front()->right->val = v;
            q.front()->right = rr;
            rr->right = r;
            q.pop();
        }
        }
        return root;
    }
};
