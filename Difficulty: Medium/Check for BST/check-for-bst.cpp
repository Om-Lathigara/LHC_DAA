/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    bool isBST(Node* r) {
        vector<int> v;

        stack<Node*> s;

        while(r != nullptr || !s.empty()) {
            while(r != nullptr) {
                s.push(r);
                r = r->left;
            }

            r = s.top();
            s.pop();

            v.push_back(r->data);
            r = r->right;
        }

        for(int i = 1; i < v.size(); i++) {
            if(v[i] <= v[i-1])
                return false;
        }

        return true;
    }
};