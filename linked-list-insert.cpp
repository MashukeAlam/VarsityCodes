#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *nxt;
};

struct headNode {
    Node *top;
    Node *down;
};

Node * insertAtBeginning(Node* head, int data) {
    Node *newNode = new Node();

    newNode->data = data;
    newNode->nxt = head;
    head = newNode;
    return head;
}

void insertInMiddle(Node* prevNode, int data) {
    Node* newNode = new Node();

    newNode->data = data;
    newNode->nxt = prevNode->nxt;
    prevNode->nxt = newNode;
}
void printList(Node* head) {
    while(head->nxt != NULL){
        /* code */
        cout << head->data << " |";
        head = head->nxt;
    }
    cout << endl;
}
int main() {
    headNode *n = new headNode();
    Node *head = new Node();
    Node *top = new Node();
    head->data =12;
    head->nxt->data = 12;
    head->nxt->nxt->data = 12;
    head->nxt->nxt->nxt->data = 12;
    head->nxt->nxt->nxt->nxt = NULL;
    top->data =12;
    top->nxt->data = 12;
    top->nxt->nxt->data = 12;
    top->nxt->nxt->nxt->data = 12;
    top->nxt->nxt->nxt->nxt = NULL;



    //printList(n->top);
    printList(head);
}
