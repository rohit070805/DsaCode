#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }


};

void insertAtTail(Node* &head,Node* &tail,int data){
    if(tail==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
         Node* newNode = new Node(data);
        tail->next = newNode;
         tail= newNode;
    }
}


void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
         Node* newNode = new Node(data);
         newNode->next = head;
         head= newNode;
    }
}
int getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp){
     count++;
     temp = temp->next;
    }
    return count;
}

void deleteNode(int position,Node* &head,Node* &tail){
    if(head==NULL||position>getLength(head)) return;
    
    if(head==tail){
        Node* temp = head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }
    if(position==1){
        Node* temp = head;
        head = temp->next;
        
        temp->next=NULL;
        delete temp;
        return;
    }
    Node* prev = NULL;
    Node* curr = head;
    
    while(position!=1){  
        prev= curr;
        curr=curr->next;   
        position--;
    }
    if(curr==tail)  tail=prev;

    
    prev->next=curr->next;
    curr->next == NULL;
    delete curr;
}


// method 1 index give st. from 1
void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
        int len = getLength(head);
        
        if(position == 1) {
                insertAtHead(head, tail , data);
                return;
        }
        else if(position > len) {
                insertAtTail(head, tail, data);
                return;
        }
        else {
            Node* newNode = new Node(data);
            
            Node* prev = NULL;
            Node* curr = head;
            while(position != 1) {
                position--;
                prev = curr;
                curr = curr->next;
            }
            
            //step3:
            newNode -> next = curr;

            //step4:
            prev -> next = newNode;
            
        }
        
}

// Method 2 value given
// void insertAtPosition(Node* &head,Node* &tail,int data,int position){
//     if(head==NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     Node* temp = head;
//     while(temp->data!=position ){
//         temp = temp->next;
//     }
//     if(temp==head){
//           Node* newNode = new Node(data);
//           newNode->next=head;
//           head = newNode;
//     }else if(temp == tail){
//          Node* newNode = new Node(data);
//          tail->next=newNode;
//          tail= newNode;
//     }else{
//          Node* newNode = new Node(data);
//          newNode->next = temp->next;
//          temp->next = newNode;
//     }
// }



void printReverse(Node* head){
     if(head==NULL) return;
    if(head->next==NULL){
        cout<<head->data<<" ";
        return;
    }
    printReverse(head->next);
    cout<<head->data<<" ";
}


void print(Node* head){
    if(head==NULL) return;
    if(head->next==NULL){
        cout<<head->data<<" ";
        return;
    }
    cout<<head->data<<" ";
    print(head->next);
}

int main(){
     
      Node* head = NULL;
      Node* tail = NULL;
    
      insertAtHead(head,tail,3);
    insertAtHead(head,tail,2);
    //     insertAtHead(head,tail,1);
    //     insertAtTail(head,tail,5);
    //     insertAtPosition(4,4,head,tail);
    //     insertAtPosition(6,10,head,tail);
        
        print(head);
        cout<<endl;
     
        deleteNode(3,head,tail);
         print(head);
       if(head==NULL){
        cout<<"hii";
       }
       
     
        cout<<endl;
       
}