// Bst ke sare questions me used logiv
    // Inorder is sorted
    // use max and min variable for current NOde
    // Bst ko sidha krdo ,like linked list,Jod Do
    // Binary search lgake dekhlo ,divide and conqure
    // Mid node pe jake dono cases k liye recursion ,(0,mid-1) and (mid,n)

#include<iostream>
#include<queue>
using namespace std;
// 
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
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


Node* insertBST(Node* root,int n){
     if(root==NULL){
        Node* temp = new Node(n);
        return temp;
     }
     if(root->data> n){
       root->left= insertBST(root->left,n);
     }else{
        root->right= insertBST(root->right,n);
     }
     return root;
}
void InOrder(Node* root){
    if(root == NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
    
}
Node * minValue(Node* root){
    if(!root) return root;
    while(root->left){
        root = root->left;
    }
    return root;
}
Node * maxValue(Node* root){
    if(!root) return root;
    while(root->right){
        root = root->right;
    }
    return root;
}

bool isPresent(Node* root,int target){
    if(!root) return false;
    if(target==root->data) return true;
    if(target>root->data) return isPresent(root->right,target);
    return isPresent(root->left,target);
}

void bsttoDLL(TreeNode<int> *root,TreeNode<int> *&head)
{
  if(!root) return;
  fn(root->right,head);
  root->right=head;
  if(head) head->left=root;
  head=root;
  fn(root->left,head);
 
// for a tree ye aise chlega

//          5
//     3           7
// 2       4   6       8

// root    currhead     updatedHead
//  8       NULL            8
//  7        8              7
//  6        7              6 
//  5        6              5
//  4        5              4       
//  3        4              3
//  2        3              2

}

int main(){
   Node* root= NULL;
//    agr hm yha root node phle se hi intiialse krke bhejtehai to jrurat nhi hai inserBst fn me return krane
//  ki qki hm us node pe jo jo chnages jrenge vo permanent ho jayenge
// lekin ab wale case me vha sbse phle NULL jayega or ek nyi temp noe return ho jayegi joki use hi nhi hogi 
// agr hm line (root = insertBst(root,n) na likhe ab ye likhdi to vo temp jo return hogi vo root ki jgh set ho jayegi)
   while(true){
    int n;
    cout<<"Enter value: ";
    cin>>n;
    if(n==-1) break;
    root =insertBST(root,n);
   }
   cout<<isPresent(root,55);
   //levelOrderTraverse(root);
   return 0;
}
// Inorder of a BST is SOrted
