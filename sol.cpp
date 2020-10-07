class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& A) {
        priority_queue<int,vector<int>,greater<int>>minh;
        for(auto x:A){
            while(x!=NULL){
                minh.push(x->val);
                x=x->next;
            }
        }
        ListNode* temp=new ListNode();
        ListNode* head=temp;
        while(minh.size()!=0){
            temp->next=new ListNode(minh.top());
            minh.pop();
            temp=temp->next;
        }
        return head->next;
    }
};
