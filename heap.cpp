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
Time Complexities
    ~ Complexity of creating a heap of array - O(N)
    ~ min/max element from heap - O(1)
    ~ Insertion - O(logN)
    ~ Deletion - O(logN)
Heap STL
    ~ priority_queue<int> pq; {by default max heap}
    ~ pq.push(10);
    ~ pq.top();
    ~ pq.pop();
    ~ pq.size();
    ~ pq.empty();

    ~ priority_queue<int,vector<int>,greater<int> > pq {min Heap}

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
    // Delete specific Element from heap
    // void Delete(int element){
    //     int i = 0;
    //     while(i<index && arr[i]!=element) i++;
    //     while(i<index){
    //         arr[i]=arr[i+1];
    //         int j = i;
    //         while(arr[j]>arr[j/2]){
    //             swap(arr[j],arr[j/2]);
    //             j = j/2;
    //         }
    //         i++;
    //     }
    // }

    // pops up the top element
    void Delete(){
        index--;
        arr[1] = arr[index];
        int i = 1;
        while(i<index){
            int leftI = 2*i;
            int rightI = 2*i+1;
            int largestIndex = i;
            if(leftI<index && arr[largestIndex]<arr[leftI]){
                largestIndex = leftI;
            }
            if(rightI<index && arr[largestIndex]<arr[rightI]){
                largestIndex = rightI;
            }
            if(largestIndex==i) break;
            swap(arr[i],arr[largestIndex]);
            i = largestIndex;
        }
    }
    void print(){
        for(int i =1;i<index;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

void heapify(int*arr,int n,int index){
    // yaha pe jo n hai vo last index hai joki possible hai acces krna not number of elements
    // No need of base case as jb index last me jayega ab koi condition satofy nhihogi or function apne aap end
    int leftI = 2*index;
    int rightI = 2*index+1;
    int largestIndex = index;
            if(leftI<=n && arr[largestIndex]<arr[leftI]){
                largestIndex = leftI;
            }
            if(rightI<=n&& arr[largestIndex]<arr[rightI]){
                largestIndex = rightI;
            }
            if(largestIndex==index) return;
            swap(arr[index],arr[largestIndex]);
        heapify(arr,n,largestIndex);
        
}
void arrayToHeap(int* arr,int n){
    /* leaf nodes ko krne ki jrurat nhi,vo already hote 1 -> n/2 tak non leaf node hoti
     **ye NlogN nhi hai o(N) hi hai
     Building a heap using bottom-up heapify is O(n) because most nodes are near the bottom of the tree and move only 0–1 levels.
    Only a few nodes near the top can move many levels, so the total work adds up to linear instead of n log n.
    */
    for(int i = n/2;i>=1;i--){
        heapify(arr,n,i);
    }
}
int main(){
    // maxHeap h1;
    // h1.Insert(20);
    // h1.Insert(11);
    // h1.Insert(13);
    // h1.Insert(10);
    // h1.Insert(6);
    // h1.Insert(2);
    // h1.Insert(3);
   
    // h1.print();
    // h1.Delete();
    // h1.print();
    int arr[] = {INT_MAX,5,10,15,20,25,12,11};
   arrayToHeap(arr,7);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;

     

}
//             20
//     11              13
// 10      6       2       3
