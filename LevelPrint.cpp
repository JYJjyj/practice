//层序遍历
#include <iostream>
#include <vector>
#include <queue>
#include <math.h>
#include <stdlib.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector <int> > levelOrder(TreeNode* head) {
        vector<vector <int> > ret;
        queue<TreeNode*> q;
        if(head == NULL)
            return ret;
        q.push(head);
        while(!q.empty())
        {
            vector<int> v;
            while(!q.empty())
            {
                TreeNode* front = q.front();
                v.push_back(front->val);
                if(front->left) 
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
                q.pop();
            }
            ret.push_back(v);
        }
        return ret;
    }
    TreeNode* createBinaryTree()
    {
        TreeNode* head = (TreeNode*)malloc(sizeof(TreeNode));
        TreeNode* q1 = (TreeNode*)malloc(sizeof(TreeNode));
        TreeNode* q2 = (TreeNode*)malloc(sizeof(TreeNode));
        TreeNode* q3 = (TreeNode*)malloc(sizeof(TreeNode));
        TreeNode* q4 = (TreeNode*)malloc(sizeof(TreeNode));
        TreeNode* q5 = (TreeNode*)malloc(sizeof(TreeNode));
        head->val = 1;
        q1->val = 2;
        q2->val = 3;
        q3->val = 4;
        q4->val = 5;
        q5->val = 6;
        head->left = q1;
        head->right = q2;
        q1->left = q3;
        q1->right = q4;
        q2->left = q5;
        q2->right = NULL;
        return head;
    }
};

int main()
{
    Solution s;
    TreeNode* head = s.createBinaryTree();
    vector<vector <int> > v = s.levelOrder(head);
    for(size_t i = 0; i < v.size(); i++)
    {
        for(size_t j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}
