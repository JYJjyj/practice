//Given a singly linked list where elements are sorted in ascending order, convert it to a height balanced BST.
//给一个递增的单链表，将其转换成为平衡二叉搜索树
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* _sortedListToBST(ListNode* head, int begin, int end)
    {
        int mid = begin + (end - begin) / 2;
        if(begin > mid)
            return NULL;
        ListNode* cur = head;
        TreeNode* tmp = (TreeNode*)malloc(sizeof(TreeNode));
        int mid1 = mid;
        while(mid1--)
        {
            cur = cur->next;
        }
        tmp->val = cur->val;
        tmp->left = _sortedListToBST(head,begin,mid);
        tmp->right = _sortedListToBST(cur,mid,end);
        return tmp;
    }
    TreeNode *sortedListToBST(ListNode *head) {
        if(head == NULL)
        {
            return NULL;
        }
        ListNode* cur = head;
        int len = 0;
        while(cur != NULL)
        {
            len++;
            cur = cur->next;
        }
        return _sortedListToBST(head,0, len - 1);
    }
};
