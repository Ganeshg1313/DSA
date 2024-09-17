#include <iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    Node(){
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        cout<<"The node with data "<<this->data<<" is get deleted"<<endl;
    }

};

void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* &head){
    int length = 0;
    Node* temp = head;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead(Node* &head, Node* tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAtPos(Node* &head, Node* tail, int data, int pos){

    int length = getLength(head);

    if(head == NULL){
        insertAtHead(head, tail, data);
    }
    else if(head == tail){
        insertAtHead(head, tail, data);
    }
    else if(pos >= length + 1){
        insertAtTail(head, tail, data);
    }
    else if(pos == 1){
        insertAtHead(head, tail, data);
    }
    else{
        Node* newNode = new Node(data);
        Node* prev = NULL;
        Node* curr = head;
        while(pos != 1){
            prev = curr;
            curr = curr->next;
            pos--;
        }
        prev->next = newNode;
        newNode->next = curr;
    }
}

void deleteAtPos(Node* &head, Node* &tail, int pos){

    int length = getLength(head);

    if(head == NULL){
        cout<<"Can't delete node as LL is Empty!"<<endl;
    }
    else if(head == tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }
    else if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else if(pos == length + 1){
        Node* prev = NULL;
        Node* curr = head;
        while(prev->next == tail){
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        delete curr;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        while(pos != 1){
            prev = curr;
            curr = curr->next;
            pos--;
        }
        prev->next = curr->next;
        delete curr;
    }
}

void reverseLL(Node* &head, Node* &tail){
    if(head == NULL || head == tail){
        return;
    }
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev= curr;
        curr = temp;
    }
    tail = head;
    head = prev;
}

int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->next = third;
    third->next = NULL;

    Node* head = first;
    Node* tail = third;

    printLL(head);
    // insertAtPos(head, tail, 0, 1);
    // insertAtPos(head, tail, 40, 5);
    // insertAtPos(head, tail, 5, 2);
    // deleteAtPos(head, tail, 6);
    reverseLL(head, tail);
    printLL(head);

    return 0;
}