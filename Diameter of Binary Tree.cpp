/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    int height(TreeNode* root,int& ans)
    {
         if(root == NULL)
        {
            return 0;
        }
        int left,right;
        left = height(root->left,ans);
        right = height(root->right,ans);
        ans = max(ans,1 + left+right);
        return 1+max(left,right);
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
       
        if(root == NULL)
        {
            return 0;
        }
        int ans = INT_MIN;
        int hei = height(root,ans);
        return ans-1;
    }
};