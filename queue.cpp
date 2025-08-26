#include <iostream>
#include <queue>
using namespace std;
class Queue{
    int* arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int size=100){
        arr = new int[size];
        this->size = size;
        this->front=-1;
        this->rear =-1;
    }
    void push(int val){
        if(front==-1) front++;
        rear++;
        arr[rear]=val;
    }
    int frontt(){
       
        return arr[front];
    }
    int back(){
        return arr[rear];
    }
    void pop(){
        if(front==-1) return;
        if(front==rear){
            front=-1;
            rear = -1;
        }else
        front++;
    }
    int sizee(){
        return front==-1?0:rear-front+1;
    }
    bool empty(){
        return rear==-1;
    }
};
class CircularQueue{
    int* arr;
    int front;
    int rear;
    int size;
    public:
    CircularQueue(int size=100){
        arr = new int[size];
        this->size = size;
        this->front=-1;
        this->rear =-1;
    }
    void push(int val){
         rear++;
       if(rear<size){ 
        if(front==-1) front++;
        arr[rear]=val;
        return;
       }
       if(rear>=size){
        int temp = rear%size;
        if(temp<front){
            arr[temp]=val;
        }
        else{
            rear--;
            cout<<"Overflow"<<endl;
        }
       }
    }
    int frontt(){
       
        return arr[front%size];
    }
    int back(){
        return arr[rear%size];
    }
    void pop(){
        if(front==-1) return;
        if(front==rear){
            front=-1;
            rear = -1;
        }else{
            arr[front%size]=-1;
        front++;

    }
    }
    int sizee(){
        return front==-1?0:rear-front+1;
    }
    bool empty(){
        return rear==-1;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};

class  Deque{
    int* arr;
    int front;
    int back;
    int size;
    public:
    Deque(int size =10){
        arr = new int[size];
        this->back = -1;
        this->front = -1;
        this->size = size;
    }
    void push_back(int vaL){
        back++;
        
    }

};
class Dq
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    Dq(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void pushFront(int val)
    {
        /* // overFlow
         if (front == 0)
         {
             cout << "OverFlow" << endl;
             return;
         }
         // empty case
         else if (front == -1 && rear == -1)
         {
             front++;
             rear++;
             arr[front] = val;
         }
         // normal case
         else
         {
             front--;
             arr[front] = val;
         }
         */
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) // imp condition
        {
            cout << "OverFlow" << endl;
            return;
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[front] = val;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
            arr[front] = val;
        }
        else
        {
            front--;
            arr[front] = val;
        }
    }
    void pushBack(int val)
    {
        /* // overflow
         if (rear == size - 1)
         {
             cout << "OverFlow" << endl;
             return;
         }
         // empty case
         else if (front == -1 && rear == -1)
         {
             front++;
             rear++;
             arr[rear] = val;
         }
         // normal case
         else
         {
             rear++;
             arr[rear] = val;
         }
         */
        // The above code is garbage as humme Circular Nature maintain krna he padega
        // over flow
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) // imp condition
        {
            cout << "OverFlow" << endl;
            return;
        }
        // first Ele
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        // circular Nature
        else if (rear == size - 1 & front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }
        // normal pushing
        else
        {
            rear++;
            arr[rear] = val;
        }
    }
    void popFront()
    {
        if (rear == -1 && front == -1)
        {
            cout << "Queue underFlow" << endl;
            return;
        }
           // single element
        else if (front == rear)
        {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            
            arr[front] = -1;
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }
    void popBack()
    {
        // undeflow
        if (front == -1 && rear == -1)
        {
            cout << "UnderFlow" << endl;
            return;
        }
        // single element
        else if (front == rear)
        {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        // circular Nature
        else if (rear == 0)
        {
            arr[rear] = -1;
            rear = size - 1;
        }
        // normal Flow
        else
        {
            arr[rear] = -1;
            rear--;
        }
    }
};

int main(){
    // CircularQueue q(3);
    // q.push(1);
    // q.push(2);
    //  q.push(3);
   
    
    // //cout<<q.frontt()<<" "<<q.back()<<" "<<q.sizee()<<endl;
    
    // q.pop();
    // q.pop();
    // q.push(1);
    // q.push(2);
    // q.push(4);
    // q.print();
    deque<int> dq;
    dq.push_back(5);
    dq.push_back(10);
    dq.push_front(0);
    cout<<dq.front()<<" "<<dq.back()<<endl;
    return 0;
}