/*
Heap  -> Complete Binary Tree (nodes should be filled left to right and all levels must be fulled expect last one)
With Heap Property ->  
    ~ min Heap (parent node smaller than child node)
    ~ max Heap (parent node greater than child node)

Actual implementation is done via array,tree is only for visualisation
    ~ Starting from index 1 array,the parent of any element at ith index is present at i/2 index
    ~ Child to Parent( parent = i/2);
    ~ Parent to Child(left child = 2*i | right child = 2*i +1) {add 1 if 0-based indexing}
    ~ Yaha Heapification use hota - jo max element ko upr leke jate vo process
*/
 
#include<iostream>
#include<climits>
using namespace std;
class maxHeap{
    int arr[500000];
    int index;
    public:
    maxHeap(){
        this->arr[0] = INT_MAX;
        this->index = 1;
    }
    maxHeap(int data){
        this->arr[0] = INT_MAX;
        this->arr[1] = data;
        this->index = 2;
    }
    void Insert(int data){
        // time complexity - O(logN)
        if(index==500000){
            cout<<"Heap Overflow"<<endl;
            return;
        }
        arr[index] = data;
        int i = index;
        while(arr[i]>arr[i/2]){
            swap(arr[i],arr[i/2]);
            i = i/2;
        }
        index++;
    }
    void print(){
        for(int i =1;i<index;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    maxHeap h1;
    h1.Insert(10);
    h1.Insert(20);
    h1.Insert(5);
    h1.Insert(11);
    h1.Insert(6);
   
    h1.print();
    return 0;


}

