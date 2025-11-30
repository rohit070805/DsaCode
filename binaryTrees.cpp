#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right= NULL;
    }
};

Node* createBT(){
    int n;
    cout<<"Enter value ";
    cin>>n;
    if(n==-1){
        return NULL;
    }
    Node* newNode = new Node(n);
    cout<<"Enter value on left of node "<<n<<endl;
    newNode->left = createBT();
     cout<<"Enter value on right of node "<<n<<endl;
    newNode->right = createBT();
    return newNode;
}

void InOrder(Node* root){
    if(root == NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
    
}
void levelOrderTraverse(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp==NULL){
            // agr !q.empty loop ki condition rkhenge toh ye last NULL k 
            //liye bar bar NULL push or pop krta rhega and infinite loop
           if(!q.empty()) q.push(NULL);
           cout<<endl;
        }else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);

        }if(temp->right){
            q.push(temp->right);
        }}
    }
}

int main(){
    
    Node* root = createBT();
    levelOrderTraverse(root);
   
    return 0;
}


 