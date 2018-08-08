#include <stdio.h>
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode *cur = head;
        ListNode *next = head; 
        while(cur->next != NULL)
        {
            cur = cur->next;
        }
        cur->next = head;
        cur = head;
        while(k != 0)
        {
            next = next->next;
            k--;
        }
        while(next->next != head)
        {
            next = next->next;
            cur = cur->next;
        }
        head = cur->next;
        cur->next = NULL;
        return head;
    }
};
