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
    ListNode * nth_node(ListNode *head,int n){
        ListNode *temp=head;
        int c=1;
        while(c!=n){
            temp=temp->next;
            c++;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0) return head;
        ListNode * tail=head;
        int count=1;
        while(tail->next!=NULL){
            tail=tail->next;
            count++;
        }
        if(k%count==0) return head;
        k=k%count;
        ListNode *new_tail=nth_node(head,count-k);
        tail->next=head;;
        head=new_tail->next;
        new_tail->next=NULL;
        return head;

    }
};