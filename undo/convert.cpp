#include <iostream>

using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
        val(x), left(NULL), right(NULL) 
        {}
};
class Solution {
public:
    void _convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree == NULL)
            return;
        Convert(pRootOfTree->left);
        TreeNode *tmp = pRootOfTree->left;
        while(tmp->right != NULL)
        {
            tmp = tmp->right;
        }
        pRootOfTree->left = tmp;
        tmp->right = pRootOfTree;
        while(tmp->left != NULL)
        {
            tmp = tmp->left;
        }
        pRootOfTree->right = tmp;
        tmp->left = pRootOfTree;
        Convert(pRootOfTree->right);
    }
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        TreeNode* cur = pRootOfTree;
        _convert(pRootOfTree);
        while(cur->left != NULL)
        {
            cur = cur->left;
        }
        return cur;
    }
};
//class Solution {
//public:
//    void _Convert(TreeNode* p)
//    {
//        if(p == NULL)
//            return;
//        _Convert(p->right);
//        _Convert(p->left);
//        TreeNode *tmp = p->left;
//        while(tmp->right != NULL){
//            tmp = tmp->right;
//        }
//        p->left = tmp;
//        tmp->right = p;
//        tmp = p->right;
//        while(tmp->left != NULL)
//        {
//            tmp = tmp->left;
//        }
//        p->right = tmp;
//        tmp->left = p;
//    }
//    TreeNode* Convert(TreeNode* pRootOfTree)
//    {
//        TreeNode* ret;
//        if(pRootOfTree == NULL)
//        {
//            ret = NULL;
//        }
//        _Convert(pRootOfTree);
//        ret = pRootOfTree;
//        while(ret->left != NULL)
//        {
//            ret = ret->left;
//        }
//        return ret;
//    } 
//};
