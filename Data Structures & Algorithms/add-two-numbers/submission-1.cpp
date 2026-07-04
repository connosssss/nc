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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int modulo = 0;
        ListNode* result {l1};
        ListNode* prev = nullptr;
        
        while(l1 && l2){
            int v1 = l1->val + modulo, v2 = l2->val;
            int res = v1+v2;
            
           
            modulo = res / 10;  
            l1->val = res % 10;  
            
            prev = l1;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        if(l1){
            
            while(l1 && modulo > 0) {
                int res = l1->val + modulo;
                l1->val = res % 10;
                modulo = res / 10;
                prev = l1;
                l1 = l1->next;
            }
        }

        else if(l2){
            prev->next = l2; 

            while(l2 && modulo > 0) {
                int res = l2->val + modulo;
                l2->val = res % 10;
                modulo = res / 10;
                prev = l2;
                l2 = l2->next;
            }
        }
        
        if(modulo > 0){
            ListNode* newthing = new ListNode(modulo);
            prev->next = newthing;
        }

        return result;
    }
};
