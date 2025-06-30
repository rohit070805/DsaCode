#include<iostream>
#include<limits.h>
using namespace std;


//5******// sort zeros and one,we can also count 0 and 1 then fill array

// void sort(int arr[],int size){
//    int left =0,right = size-1;
   
//    for(left;left<right;){
//     if(arr[left] == 0){
//         left++;
//     }
//     else {
//         swap(arr[left],arr[right]);
//         right--;
//     }
//     }
   
   
  
// }


// int main(){
//     int arr[] ={0,1,1,0,1,0,0,1};
//     sort(arr,8);
//      for(int i = 0;i<8;i++){
//    cout<<arr[i]<<" "; 
//    }
//     return 0;
// }



//Sum of elements
// int main(){
//     int arr[5];
//       cout<<"Enter the values of array"<<endl;
//     for(int i= 0;i<5;i++){
      
//         cin>>arr[i];
//     }
//     int sum = 0;
//     for(int i=0;i<5;i++){
//         sum = sum + arr[i];

//     }
//     cout<<sum;
    
// }

//Linear Search

// bool linearSearch(int arr[],int size,int key){
    
//     for(int i = 0;i<size;i++){
//       if(arr[i] == key){
//        return true;
//       }
//       }
//       return false;
// }
// int main(){
//      int arr[5];
//      int a;
//     cout<<"Enter the values of array"<<endl;
//     for(int i = 0;i<5;i++){
//       cin>>arr[i];
//     }
//      cout<<"Enter the element you want to search ";
//      cin>>a; 
//      int size = 5;
//      bool flag = linearSearch(arr,size,a);
//      if(flag){
//         cout<<"The element found";
        
//       }
//       else{
//         cout<<"Target not found";
//       }
//     return 0;
// }


//COunt 0 and 1

// void ZeroOneCount(int arr[],int size){
//      int count0 = 0,count1 =0;
//     for(int i =0;i<size;i++){
//         if(arr[i]==0){
//             count0++;
//         }
//         else if (arr[i]==1){
//             count1++;
//         }
//        }
//        cout<<"Number of zeros is array is: "<<count0<<endl;
//        cout<<"Number of ones is array is: "<<count1<<endl;
// }
// int main(){
//     int arr[10] = {1,0,1,1,1,0,0,1,0,1};
//    ZeroOneCount(arr,10);
       
// }


//Minimum number in array
// int minNumber(int arr[],int size){
//     int a = INT32_MAX;
//    for(int i =0;i<size;i++){
//     if(arr[i]<a){
//         a = arr[i];
//     }
// }
// return a;
// }
// int main(){
//     int arr[10] = {2,43,4,1,56,4,6,4,3,-10};
//     int ans = minNumber(arr,10);
//     cout<<"minimum number in array is: "<<ans;
// }


//Reverse an array
// void reversedarray(int arr[],int size){
    // for(int i =0;i<size/2;i++){
    //     int swap = arr[i];
    //     arr[i]= arr[size-i-1];
    //     arr[size - i -1] = swap;
    // }
//     cout<<"Reversed Array is:"<<endl;
//     for(int i = 0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[4] = {1,2,3,4};
//     reversedarray(arr,4);
// }


//extreme print an array(reverse wale method se bhi kr skte ,size odd even dekhkr)
// void extremeprintarray(int arr[],int size){
//     int left =0, right = size-1;
//     for(left,right;left<=right;left++,right--){
//         if(left == right){
//             cout<<arr[left];
//         }
//         else
//         cout<<arr[left]<<" "<<arr[right]<<" ";
//     }
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     extremeprintarray(arr,5);
// }


//Find unique element{rohit}
// void unique(int arr[],int size){
   
//     for(int i =0;i<size;i++){
//         int count = 0;;
//         int a = arr[i];
//         for(int j =0;j<size;j++){
//             if(a == arr[j]){
//                 count++;
//             }
//         }
//         if(count<2){
//             cout<<"The Unique element is: "<< arr[i]<<endl;
//         }
//     }
// }


// int main(){
//     int arr[6] = {1,3,4,1,6,3};
//     unique(arr,6);
//     return 0;
// }


//method 2
// int unique(int arr[],int size){
//     int ans = 0;
//     for(int i =0;i<size;i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// int main(){
//     int arr1[5] = {1,3,4,1,3};
//     cout<<"UNique element is:"<<unique(arr1,5);
//     return 0;
// }

//Printing pairs,same for triplets
// void pairs(int arr[],int size){
//     for(int i = 0;i<size;i++){
//         for(int j =0;j<size;j++){
//             cout<<"("<<arr[i]<<","<<arr[j]<<") " ; 
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[3]={10,20,30};
//     pairs(arr,3);
//     return 0;
// }



// Shift elements by one
// void shift(int arr[],int size){
//     int temp = arr[size-1];
//       for(int i = size-1;i>=0;i--){
        
//         if(i==0){
//             arr[0] =temp;
//         }
//         else{
//             arr[i]=arr[i-1];
//         }
//       }
//     for(int i = 0;i<size;i++){
//         cout<<arr[i]<<" ";
//    }
// }

// int main(){
//     int arr[5] ={1,2,3,4,5};
//     shift(arr,5);
//     return 0;
// }