#include<iostream>
#include<stack>
using namespace std;

class Stack{
    int* arr;
    int size;
    int top;
    public:
    Stack(int size=100){
        arr = new int[size];
        this->size = size;
        this->top= -1;
    }
    void push(int x){
        if(top == size-1){
            cout<<"Stack overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    bool isEmpty(){
        return top==-1;
    }
    int getTop(){
        if(top == -1){
            cout<<"Stack Empty";
            return -1;  
        }
        return arr[top];
    }
    int getSize(){
        return top+1;
    }
    void pop(){
        if(top == -1){
            cout<<"Stack Empty";
            return;
        }
        top--;
    }

};

vector<int> nextSmaller(int *arr, int n)
{
    stack<int> st;
    vector<int> ans;
    st.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() >= curr)
        {
            st.pop();
        }
        ans.push_back(st.top());
        st.push(curr);
    }
    return ans;
}
// prev Smaller
vector<int> prevSmaller(int *arr, int n)
{
    stack<int> st;
    vector<int> ans;
    st.push(-1);
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (st.top() >= curr)
        {
            st.pop();
        }
        ans.push_back(st.top());
        st.push(curr);
    }
    return ans;
}
int main(){
    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // cout<<st.size()<<endl;
    // st.pop();
    // st.empty()==true?cout<<"empty" : cout<<"not empty"<<endl;
    // cout<<st.top();

     Stack s;
    s.push(1);
      s.push(2);
        s.push(3);
        s.push(4);
        s.pop();
        cout<<s.getTop()<<" "
        <<s.getSize()<<" "
        <<s.isEmpty();
    return 0;
}