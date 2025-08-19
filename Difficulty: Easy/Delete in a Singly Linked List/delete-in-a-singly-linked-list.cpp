/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head == NULL) return head;
        int cnt = 0;
        Node* temp = head;
        Node* prev = NULL;
        while(temp != NULL){
            cnt++;
            if(cnt == x){
                if(prev != NULL){
                    prev->next = prev->next->next;
                    delete temp;
                    return head;
                }
                else{
                    Node* temp = head;
                    head = head->next;
                    delete temp;
                    return head;
                }
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};