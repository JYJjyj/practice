#include <iostream>
#include <stdlib.h>
using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if(pHead == NULL)
            return NULL;
        ListNode* cur = pHead;
        while(cur ->next != NULL)
        {
            while(cur->val == cur->next->val)
            {
                cur->next = cur->next->next;
                if(cur->next == NULL)
                    return pHead;
            }
            cur = cur->next;
        }
        return pHead;
    }
};

int main()
{
    ListNode *p = (ListNode*)malloc(sizeof (ListNode));
   ListNode *a = (ListNode*)malloc(sizeof (ListNode));
   ListNode *b = (ListNode*)malloc(sizeof (ListNode));
   ListNode *c = (ListNode*)malloc(sizeof (ListNode));
   ListNode *d = (ListNode*)malloc(sizeof (ListNode));
   ListNode *e = (ListNode*)malloc(sizeof (ListNode));
   ListNode *f = (ListNode*)malloc(sizeof (ListNode));
   p->val = 1;
   a->val = 1;
   b->val = 1;
   c->val = 1;
   d->val = 1;
   e->val = 1;
   f->val = 1;
   p->next = a;
   a->next = b;
   b->next = c;
   c->next = d;
   d->next = e;
   e->next = f;
   f->next = NULL;

    Solution s;
    ListNode* cur = s.deleteDuplication(p);
    while(cur != NULL)
    {
        cout<<cur->val<<" ";
        cur = cur->next;
    }
    cout<<endl;
    return 0;
}
