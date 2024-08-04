#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *dummy = new ListNode();
    ListNode *temp = dummy;

    // if(list1==NULL && list2==NULL) return NULL;
    // if(list1==NULL) return list2;
    // if(list2==NULL) return list1;

    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            temp->next = list1;
            list1 = list1->next;
        }
        else
        {
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }

    // if list2 reached end but elements left in list 1
    if (list1)
    {
        temp->next = list1;
    }

    // if list1 reached end but elements left in list 2
    if (list2)
    {
        temp->next = list2;
    }

    // head is next of dummy node
    ListNode *head = dummy->next;
    delete dummy;
    return head;
}