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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> avg;
        queue<TreeNode*> q;
        if(root == NULL)
        {
            return avg;
        }
        q.push(root);
        while(q.size())
        {
            int s = q.size();
            double avgval = 0;
            for(int j = 0 ; j<s; j++)
            {
            avgval = avgval + q.front()->val;
            if(q.front()->left)
            {
                q.push(q.front()->left);
            }
            if(q.front()->right)
            {
                q.push(q.front()->right);
            }
            q.pop();
            }
            avg.push_back(avgval/s);
        }
        return avg;
    }
};
