#include<iostream>
#include<math.h>
using namespace std;

//******
//     1
//    121
//   12321
//  1234321
// 123454321

// int main(){
//     int n;
//     cin>>n;
//     for(int i= 0;i<n;i++){
//         for(int j =0 ;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<(2*i) +1;j++){
//             if(j<i+1){
//                 cout<<j+1;
//             }
//             else{
//                 cout<<(2*i)-j+1;
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 3*3*3
// 2*2
// 1

// int main(){
//     int n;
//     cin>>n;
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<2*i+1;j++){
//             if(j%2 == 0){
//                 cout<<i+1;
//             }
//             else
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i = 0;i<n-1;i++){
//         for(int j = 0;j<n+1-(2*i);j++){
//             if(j%2 == 0){
//                 cout<<n-i-1;
//             }
//             else
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0 ;
// }




// ******
// *   *
// *  *
// * *
// **
// *

// int main(){
//     int n;
//     cin>>n;
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<n-i;j++){
//             if(i==0 || i == n-1){
//                 cout<<"*";
//             }
//             else{
//                 if(j ==0 || j == n-i-1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
//     return 0 ;
// }


// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

// int main(){
//     int n;
//     cin>>n;
//     for(int i =0;i<n;i++){
//         for(int j =0;j<i+1;j++){
//             char ch = 'A' + j;
//             cout<<ch;
//         }
//         for(int j=0;j<i;j++){
//             char ch = 'A' + i -j-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
//      return 0 ;
// }


// 12345
// 2  5
// 3 5
// 45
// 5

// int main(){
//     int n;
//     cin>>n;
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<n-i;j++){
//             if(i==0){
//                 cout<<j+1;
//             }
//             else{
//                 if(j==0){
//                     cout<<i+1;
//                 }
//                 else if(j==n-i-1){
//                     cout<<5;
//                 }
//                 else
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

// int main(){
//     int n,a=1;
//     cin>>n;
//     for(int i = 0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<a<<" ";
//             a = a+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****

// int main(){
//     int n;
//     cin>>n;
//     for(int i  =0;i<n;i++){
//         for(int j =0;j<n-i+3;j++){
//             cout<<"*";
//         }
//         for(int j =0;j<(2*i)+1;j++){
//             if(j%2 == 0){
//                 cout<<i+1;
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         for(int j =0;j<n-i+3;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Butterfly pattern
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

// int main(){
//     int n;
//     cin>>n;
//     for(int i = 0;i<n/2;i++){
//         for(int j =0;j<n;j++){
//             if(j<i+1 || j> n-i-2){
//                 cout<<"*";
//             }
//             else
//             cout<<" ";
//         }
//         cout<<endl;

//     }
//     for(int i =0;i<n/2;i++){
//         for(int j =0;j<n;j++){
//             if(j<(n/2)-i || j>= (n/2)+ i){
//                 cout<<"*";
//             }
//             else
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

int sqrt(int n ){
    int s = 1;
    int e = n;
    int ans;
    while(s<=e){
        int mid = s +(e-s)/2;
        if(mid <= n/mid){
            ans = mid;
            s= mid + 1;
        }
        else{
            e = mid -1;
        }
}
    return ans;

}

float sqrtk(int n , int k){
    float result =sqrt(n) ;
    float x = 1/pow(10,k);
    cout<<x;
    float s = sqrt(n) + x;
    float e= sqrt(n) +1 - x; 
    while(s <= e){
        float mid = s + (e-s)/2;
        if(mid <= n/mid){
            result = mid;
            s= mid + x;
        }
        else{
            e= mid -x;
        }
        
    }
    return result;
}

int main(){
    cout<<sqrtk(27,3);
    return 0;
}