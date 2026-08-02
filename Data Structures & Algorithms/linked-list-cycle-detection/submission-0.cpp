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
    bool hasCycle(ListNode* head) {
        std::unordered_set<ListNode *> visited;
        ListNode* curr(head);

        while(curr != nullptr){
            if(visited.count(curr->next)){
                return true;
            }
            visited.insert(curr->next);
            curr = curr->next;
        }
        return false;
    }
};
