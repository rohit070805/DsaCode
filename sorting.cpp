#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void bubbleSort(vector<int>& nums){
    int n = nums.size();
    for(int i = 0;i<n-1;i++){
        
        for(int j =0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
            swap(nums[j],nums[j+1]);
            }
        }
    }
}
//  int main(){
//     vector<int> arr{5,4,3,2,1};
//     bubbleSort(arr);
//     for(int i = 0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//  }

 void selectionSort(vector<int>& nums){
    int n = nums.size();
    for(int i = 0;i<n-1;i++){
        
        int k = i;
        for(int j = i;j<n;j++){
            if(nums[j]<nums[k]){
                k = j;
            }
        }
        swap(nums[i] ,nums[k]);

    }
 }
 
void insertionSort(vector<int>& nums){
    for(int i = 1; i<nums.size();i++){
        int key = nums[i];
        int j = i -1;
        while(j>=0 && key < nums[j]){
            nums[j+1] = nums[j];
            j--;
}
      nums[j+1] = key;
    }
         
}
int main(){
    vector<int> arr{33,44,11,55,22};
    insertionSort(arr);
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
 }