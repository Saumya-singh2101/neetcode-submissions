class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p == NULL && q == NULL)
            return true;

        if(p == NULL || q == NULL)
            return false;

        if(p->val != q->val)
            return false;

        bool pl = isSameTree(p->left, q->left);
        bool pr = isSameTree(p->right, q->right);

        if(pl != true || pr != true)
            return false;

        return true;
    }
};
