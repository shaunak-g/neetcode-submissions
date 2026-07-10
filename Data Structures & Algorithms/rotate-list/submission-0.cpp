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
    ListNode* NthNode(ListNode* temp,int k){
        int cnt = 1;
        while(temp!=NULL){
            if(cnt == k){
                return temp;
            }
            cnt ++;
            temp = temp->next;
        }
        return NULL;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k ==0){
            return head;
        }
        ListNode* tail = head;
        int len =1;
        while(tail->next!=NULL){
            len ++;
            tail = tail->next;
        }
        if(k%len ==0){
            return head;
        }
        k = k%len;
        tail->next = head;

        ListNode* LastNode = NthNode(head,len - k);
        head = LastNode->next;
        LastNode->next = NULL;
        return head;
        
    }
};