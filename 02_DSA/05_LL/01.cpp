#include<iostream>
using namespace std;
 
 class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
 };

 void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
        return;
    }
    Node* temp = head;


    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
 }

 void insertAtBeginning(Node* &head, int val){
    Node* node = new Node(val);
    node->next = head;
    head = node;
 }

 void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << " NULL";
 }

 void insertAtPosition(Node* &head, int pos, int val){
    Node* node = new Node(val);

    if(pos==1){
        node->next = head;
        head = node;
        return;
    }
    Node* temp = head;
    for(int i = 1; i < pos - 1 && temp != NULL; i++){
        temp = temp ->next;
    }
    node->next = temp ->next;
    temp->next = node;
 }

 void delAtEnd(Node* &head){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
 }


void delAtBeg(Node* &head){
    if(head == NULL) return;

    Node* temp = head;
    head = head->next;
    delete temp;
}

void delAtPos(Node*  &head, int pos){
    if(head == NULL) return;

    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;

    for(int i = 1; i < pos - 1 && temp != NULL; i++){
        temp= temp->next;
    }
    Node* toDel = temp->next;
    temp->next = temp->next->next;
    delete toDel;
}
int main()
{
    Node* head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtBeginning(head, 5);
    printList(head);


}