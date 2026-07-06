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
            head=node;
            head->next = head;
            return;
        }

        Node* temp = head;

        while(temp->next != head){
            temp= temp->next;
        }
        temp->next = node;
        node->next = head;

 }
 
 void delAtBeg(Node* &head){
    if(head == NULL) return;

    if(head->next = head){
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    Node* toDel = head;

    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = head->next;
    head = head->next;
    delete toDel;
 }

 void printList(Node* head){
    Node* temp = head;
    do{
        cout << temp->data << " -> ";
        temp = temp->next;
    }while(temp != head);
 }

 //insertion at beg, nth
 // del at end, nth
int main()
{
 
}