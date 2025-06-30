#include <iostream>
#include<limits.h>
using namespace std;



void printarrayrowwise(int arr[][3],int row,int col){
    for(int i = 0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<< endl;
    }
}
 void input(int arr[][3],int row,int col){
    for(int i = 0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>>arr[i][j];
        }
        
    }
 }

 void printarraycolwise(int arr[][3],int row,int col){
    
    for(int j =0;j<col;j++){
        for(int i = 0;i<row;i++){
           cout<<arr[i][j]<<" ";
        }
        cout<< endl;
    }
}

 bool linearsearch(int arr[][3],int row,int col,int target){
    for(int i = 0;i<row;i++){
        for(int j =0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
        
    }
    return false;
 }

 int Max(int arr[][3],int row,int col){
    int a = INT32_MIN;
    for(int i =0;i<row;i++){
     for(int j =0;j<col;j++){
            if(arr[i][j]>a){
                a = arr[i][j];
            }
        }
    }
        return a;
 }

 void rowwisesum(int arr[][3],int row,int col){
    
    for(int i =0;i<row;i++){
        int sum = 0;
        for(int j =0;j<col;j++){
            sum = sum + arr[i][j];
        }
        cout<<"Sum of "<<i+1<<" row is "<<sum<<endl;
    }
 }

 void colwisesum(int arr[][3],int row,int col){
    
    for(int j =0;j<row;j++){
        int sum = 0;
        for(int i =0;i<col;i++){
            sum = sum + arr[i][j];
        }
        cout<<"Sum of "<<j+1<<" column is "<<sum<<endl;
    }
 }


 void diagonalsum(int arr[3][3],int row,int col){
    int sum = 0;
    for(int i =0;i<row;i++){
        sum = sum + arr[i][i];
    }
    cout<<"Diagonal sum is: "<<sum;
 }

void transpose(int arr[3][3],int row,int col){
    for(int i = 0;i<row;i++){
        for(int j = 0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
 }

int main(){
    int arr[][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int arr2[3][3];
    int row =3;
    int col =3;
    
    
    // input(arr2,row,col);

    // printarrayrowwise(arr,row,col);

    // printarraycolwise(arr,row,col);


    //Linear search
    // if(linearsearch(arr,3,3,11)){
    //     cout<<"target exist ";
    // }
    // else
    // cout<<"Target doest not exist";
    
    // Max number
    // cout<<"Max number is: "<< Max(arr,3,3);
    // rowwisesum(arr,row,col);
    // colwisesum(arr,row,col);
    diagonalsum(arr,3,3);
    // transpose(arr,3,3);
    // printarrayrowwise(arr,3,3);

    
   return 0;
} 