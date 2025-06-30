#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(){
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data){
        this->data = data;
        this->next=NULL;
        this->prev=NULL;

    }
};


int getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp){
     count++;
     temp = temp->next;
    }
    return count;
}
void insertAtTail(int data,Node* &head,Node* &tail){
    if(tail==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail=newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next=newNode;
        newNode->prev=tail;
       tail=newNode;
    }
}

void insertAtHead(int data,Node* &head,Node* &tail){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail=newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}

void insertAtposition(int position,int data,Node* &head,Node* &tail){
    if(position==1){
         insertAtHead(data,head,tail);
    }
    else if(position>getLength(head)){
        insertAtTail(data,head,tail);
    }else{
        Node* temp = head;
        while(position!=1){
            temp=temp->next;
            position--;
        }
        Node* newNode=new Node(data);
        newNode->next=temp;
         newNode->prev=temp->prev;
        temp->prev->next=newNode;
        temp->prev=newNode;
       
    }
}

void deleteNode(int position,Node* &head,Node* &tail){
    if(head==NULL) return;
    if(head == tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail==NULL;
        return;
    }
    if(position==1){
        Node* temp = head;
        temp->next->prev=NULL;
        head=head->next;
        
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
        return;
    }else{
        Node* temp = head;
        while(position!=1){
            temp=temp->next;
            position--;
        }
        if(temp==tail) {
            temp->prev->next=temp->next;
            tail = temp->prev;
             temp->prev=NULL;
            temp->next=NULL;
            delete temp;
            return;    
        }
        temp->prev->next = temp->next;
        temp->next->prev=temp->prev;
        temp->prev=NULL;
        temp->next=NULL;
        delete temp;

        
    }
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

void printReverse(Node* tail){
    Node* temp = tail;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(30,head,tail);
     insertAtHead(20,head,tail);
      insertAtHead(10,head,tail);
      insertAtTail(50,head,tail);
      insertAtposition(4,40,head,tail);
      print(head);
      cout<<endl;
      printReverse(tail);
        cout<<endl;
      deleteNode(3,head,tail);
       print(head);
      cout<<endl;
      printReverse(tail);
     
      return 0;
}