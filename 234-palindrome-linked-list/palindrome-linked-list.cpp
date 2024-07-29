// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         if (head == NULL || head->next == NULL) {
//             return true; // An empty list or a single node list is a palindrome
//         }

//         // Find the middle of the list using slow and fast pointers
//         ListNode* slow = head;
//         ListNode* fast = head;

//         // Corrected loop to find the middle of the list
//         while (fast != NULL && fast->next != NULL) {
//             fast = fast->next->next;
//             slow = slow->next;
//         }

//         // Reverse the second half of the list
//         slow = reverseList(slow);
//         ListNode* secondHalf = slow;

//         // Compare the first half and the reversed second half
//         ListNode* firstHalf = head;
//         while (secondHalf != NULL) {
//             if (firstHalf->val != secondHalf->val) {
//                 return false;
//             }
//             firstHalf = firstHalf->next;
//             secondHalf = secondHalf->next;
//         }
//         return true;
//     }

//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* next = NULL;
//         while (head != NULL) {
//             next = head->next;
//             head->next = prev;
//             prev = head;
//             head = next;
//         }
//         return prev; // prev will be the new head of the reversed list
//     }
// };


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> listVals;
        while (head) {
            listVals.push_back(head->val);
            head = head->next;
        }
        
        int left = 0, right = listVals.size() - 1;
        while (left < right && listVals[left] == listVals[right]) {
            left++;
            right--;
        }
        return left >= right;  
    }
};
