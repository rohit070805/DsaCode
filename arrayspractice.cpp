#include<iostream>
#include<vector>
using namespace std;

void printarray(int arr[],int size){
    for ( int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}

// bool keypair(int arr[],int size,int key){
//     for(int i =0;i<size;i++){
//         for(int j =i+1;j<size;j++){
//              if(key == arr[i] + arr[j]){
//                     return true;
//                 }
            
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[5] ={1,2,3,5,5};
//     if(keypair(arr,5,9)){
//         cout<<"key pair exist";
//     }
//     else{
//         cout<<"Key pair does not exist";
//     }
// }

// int pivotIndex(int arr[],int size){

// for(int i =1;i<size;i++){
//     int suml =0,sumr=0;
//     for(int j =0;j<size;j++){
//         if(j<i){
//             suml = suml + arr[j]; 
//         }
//         else if(j>i){
//             sumr = sumr + arr[j];
//         }

//     }
//     if(suml == sumr){
//         return i;
//     }
    
// }
// return -1;
// }


// int main(){
//     int arr[6] ={1,7,3,6,5,6};
//     int a = pivotIndex(arr,6);
//     if(a!=-1){
//         cout<<"Pivot index is:"<<a;
//     }
//     else{
//         cout<<"pivot index does not exist";
//     }
//     return 0;
// }

// int missingNumber(int arr[],int size){
//     for(int i =0;i<size-1;i++){
//         if(arr[i+1]!=arr[i]+1){
//             return arr[i] + 1;
//         }
//     }
//         return -1;
// }

// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int a =missingNumber(arr,8);
//     if (a!=-1)
//     cout<<"Missing number is: "<<a;
//     else
//     cout<<"No missing number";

// return 0;

// }
  

// print non duplicate from sorted array  
// void removeduplicate(int arr[],int size){

//     for(int i =0;i<size;i++){
//          int a = arr[i+1]^arr[i];
//          if(a!=0){
//             cout<<arr[i]<<" ";
//          }
//     }
// }
// int main(){
//     int arr[5]= {1,2,3,3,4};
//     removeduplicate(arr,5);
// }


// Differentiat negative and positive

// void differ(int arr[],int size){
//     int left = 0,right = size-1;
//     for(left;left<right;){
//         if(arr[left]>0){
//             swap(arr[left],arr[right]);
//             right--;
//         }
//         else
//         left++;
//          }
// }

// // method 2
// void differ2(int arr[],int size){
//     int left = 0,j= 0;
//     for(left;left<size;left++){
//         if(arr[left]<0){
//             swap(arr[left],arr[j]);
//             j++;
//         }
        
//          }
// }

// int main(){
//     int arr[6]= {1,-2,4,-6,-8,-9};
//     differ(arr,6);
//     printarray(arr,6);

// }

void sort01(int arr[],int size){
       int i = 0;
       int j=0;
       for(i;i<size;i++){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            j++;
        }
       }
}
int main(){
    int arr[5] = {1,0,1,1,0};
    sort01(arr,5);
    printarray(arr,5);
    return 0;
}