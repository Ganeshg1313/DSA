#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
       cout<<"The node with data "<<this->data<<" is get deleted"<<endl;
    }
};

void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"<->";
        temp = temp->next;
    }
    cout<<endl;
}
int getLength(Node* &head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        head->prev = newNode;
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
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtPos(Node* &head, Node* &tail, int data, int pos){

    int len = getLength(head);

    if(head == NULL){
        insertAtHead(head, tail, data);
    }
    else if(head == tail){
        insertAtHead(head, tail, data);
    }
    else if(pos < 1){
        cout<<"Invalid Position!"<<endl;
    }
    else if(pos == 1){
        insertAtHead(head, tail, data);
    }
    else if(pos >= len + 1){
        insertAtTail(head, tail, data);
    }
    else{
        Node* newNode = new Node(data);
        Node* prevNode = NULL;
        Node* currNode = head;
        while(pos != 1){
            prevNode = currNode;
            currNode = currNode->next;
            pos--;
        }
        newNode->prev = prevNode;
        currNode->prev = newNode;
        prevNode->next = newNode;
        newNode->next = currNode;
    }
}

void deleteAtPos(Node* &head, Node* &tail, int pos){

    int len = getLength(head);

    if(head == NULL){
        cout<<"LL is empty!"<<endl;
    }
    else if(head == tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }
    else if(pos == 1){
        Node* temp = head;
        Node* headNext = head->next;
        headNext->prev = NULL;
        head->next = NULL;
        delete temp;
        head = headNext;
    }
    else if(pos > len){
        cout<<"Invalid position!"<<endl;
    }
    else if(pos == len){
         Node* tailPrev = tail->prev;
         tailPrev->next = NULL;
         tail->prev = NULL;
         delete tail;
         tail = tailPrev;
    }
    else{
        Node* prevNode = NULL;
        Node* currNode = head;
        while(pos != 1){
            prevNode = currNode;
            currNode = currNode->next;
            pos--;
        }
        Node* nextNode = currNode->next;
        prevNode->next = nextNode;
        currNode->prev = NULL;
        nextNode->prev = prevNode;
        currNode->next = NULL;
        delete currNode;
    }
}

void reverseLL(Node* &head, Node* &tail){
    Node* prevNode =  NULL;
    Node* currNode = head;
    while(currNode != NULL){
        prevNode = currNode->prev;
        currNode->prev = currNode->next;
        currNode->next = prevNode;
        currNode = currNode->prev;
    }
    head = prevNode->prev;
}


int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;

    Node* head = first;
    Node* tail = third;
    
    printLL(head);
    // insertAtHead(head, tail, 0);
    // insertAtTail(head, tail, 40);
    // insertAtPos(head, tail, 0, 1);
    // insertAtPos(head, tail, 40, 5);
    // insertAtPos(head, tail, 5, 2);
    // deleteAtPos(head, tail, 1);
    reverseLL(head, tail);
    printLL(head);

    return 0;
}