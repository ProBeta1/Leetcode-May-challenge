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
    
    bool bfs(TreeNode *root,int x,int y){
        queue<TreeNode*>q;
        if(root==NULL)
            return false;
        q.push(root);
        TreeNode *parx,*pary;
        int lev[200] = {0};
        lev[root->val] = 0;
        while(!q.empty()){
            root = q.front();
            q.pop();
            if(root->left!=NULL){
                q.push(root->left);
                if(root->left->val == x){
                    parx = root;
                }
                if(root->left->val == y){
                    pary = root;
                }
                lev[root->left->val] = lev[root->val]+1;
            }
            if(root->right!=NULL){
                q.push(root->right);
                if(root->right->val == x){
                    parx = root;
                }
                if(root->right->val == y){
                    pary = root;
                }
                lev[root->right->val] = lev[root->val]+1;

            }
        }
        if(lev[x] == lev[y] && parx!=pary)
            return true;
        return false;
    }    
    
    bool isCousins(TreeNode* root, int x, int y) {
        return bfs(root,x,y);
    }
};
