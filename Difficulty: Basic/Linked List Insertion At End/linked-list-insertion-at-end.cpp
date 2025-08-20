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
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        if(head == NULL){
            return new Node(x);
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        Node* newN = new Node(x);
        temp->next = newN;
        return head;
    }
};