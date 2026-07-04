/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode temp(0);
        ListNode* res = &temp;
        ListNode* prev = &temp;
    
        while(list1 && list2){
            if(list1->val > list2->val) {
                prev->next = list2;
                prev = list2;
                list2 = list2->next;
                }

            else {
                prev->next = list1;
                prev = list1;
                list1 = list1->next;
            }

        }

        if(list1 && !list2){
            while(list1){
                prev->next = list1;
                prev = list1; 
                list1 = list1->next;
            }
        }
        
        if(list2 && !list1){
            while(list2){
                prev->next = list2;
                prev = list2;
                list2 = list2->next;
            }
        }
        return res->next;

    }
};
