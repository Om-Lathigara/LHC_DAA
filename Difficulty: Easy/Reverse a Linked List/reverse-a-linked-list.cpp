/* Structure of Linked List Node
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* h) {
        Node* p = nullptr;
        Node* c = h;

        while(c != nullptr) {
            Node* n = c->next;
            c->next = p;
            p = c;
            c = n;
        }

        return p;
    }
};