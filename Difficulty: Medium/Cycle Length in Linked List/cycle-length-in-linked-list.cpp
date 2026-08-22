/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int lengthOfLoop(Node *head) {

        Node *slow = head;
        Node *fast = head;

        // Find whether cycle exists
        while(fast != nullptr && fast->next != nullptr) {

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {

                // Cycle found, calculate its length
                int count = 1;
                Node *temp = slow->next;

                while(temp != slow) {
                    count++;
                    temp = temp->next;
                }

                return count;
            }
        }

        return 0;
    }
};