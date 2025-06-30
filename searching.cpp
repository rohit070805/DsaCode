#include<iostream>
using namespace std;

// ***Binary search in nearly sorted array


int missingElement(int arr[],int n){
        int s = 0,e = n-1;
        int result = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(arr[mid]==mid+2){
                result = mid + 1;
                e = mid - 1;
            }
            else if(arr[mid]==mid + 1){
                s = mid + 1;
            }
        }
        return result;
}
// int findTotalOccurance(int arr[],int n,int target){
//     int s = 0,e = n-1;
//     int left = -1,right = -1;
//     while(s<=e){
//        int mid =s + (e - s)/2;
//         if(arr[mid]==target){
//            left = mid;
//            e = mid -1;
//         }
//         else if(target>arr[mid]){
//             s= mid +1;
//         }
//         else if(target<arr[mid]){
//             e = mid -1;
//         }
//     }
//     s = 0;
//     e = n-1;
//     while(s<=e){
//        int mid =s + (e - s)/2;
//         if(arr[mid]==target){
//            right= mid;
//            s = mid +1;
//         }
//         else if(target>arr[mid]){
//             s= mid +1;
//         }
//         else if(target<arr[mid]){
//             e = mid -1;
//         }
//     }
//     return right - left +1;

// }
// int BinarySearch(int arr[],int n,int target){
//     int s = 0,e = n-1;
//     while(s<=e){
//        int mid = s + (e - s)/2;
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(target>arr[mid]){
//             s= mid +1;
//         }
//         else if(target<arr[mid]){
//             e = mid -1;
//         }
//     }
//     return -1;
// }

// // first occurance{similiar for last occurance}
// int Firstoccurance(int arr[],int n,int target){
//     int s = 0,e = n-1;
//     int ans = -1;
//     while(s<=e){
//        int mid =s + (e - s)/2;
//         if(arr[mid]==target){
//            ans = mid;
//            e = mid -1;
//         }
//         else if(target>arr[mid]){
//             s= mid +1;
//         }
//         else if(target<arr[mid]){
//             e = mid -1;
//         }
//     }
//     return ans;
// }


// Pivot number(maximum number in rotated and sorted array)
int pivotElement(int arr[],int size){
int s =0;
int e= size - 1;
int ans; 


while(s<=e){
    if(size = 1){
    return arr[s];
}
else{
    int mid = s + (e-s)/2;
    if(arr[mid]>arr[mid+1]){
        return  arr[mid];
    }
    else if(arr[mid]<arr[mid+1] && arr[mid]<arr[s]){
        e =mid -1;
    }
    else{
        s = mid + 1;
    }
}
}
}


int  quotient(int a , int b){
    int s = 1;
    int e = a;
    int ans;
    if(b == 0){
        return -1;
    }
    while(s<=e){
        int  mid = s + (e-s)/2;
        if(mid <= a /b){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid -1;
        }
    }
    return ans;
}



int main(){
    int arr[8] = {10,12,14,16,18,2,6,8};
    int target = 3;
    int size = 8;
    cout<<pivotElement(arr,size)<<endl;
    
}