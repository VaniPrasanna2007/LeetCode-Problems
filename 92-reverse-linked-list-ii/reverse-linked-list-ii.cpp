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
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        ListNode*temp=head;
        vector<int>v;
         while(temp!=NULL){
         v.push_back(temp->val);
         temp=temp->next;
      }
      int left=l-1;
      int right=r-1;
     while(left<right){
        int x=v[left];
        v[left]=v[right];
        v[right]=x;
        left++;
        right--;
     }
     temp=head;
     for(int i=0;i<v.size();i++){
        temp->val=v[i];
        temp=temp->next;
     }
     return head;
    }
};