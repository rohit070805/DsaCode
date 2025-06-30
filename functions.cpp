#include<iostream>
#include<math.h>
using namespace std;
//sum of three
// int sumofthree(int a,int b,int c){
//   int ans =a+b+c;
//   return ans;
// }
// int main(){
//     int sum = sumofthree(5,6,7);
    
//     cout<<sum ;
//     return 0;
// }


// //Max of three
// int maxofthree(int a,int b,int c){
//   int ans =a>=b?(a>=c?a:c):(b>c?b:c);
//   return ans;
// }
// int main(){
//     int max = maxofthree(7,6,7);
    
//     cout<<max ;
//     return 0;
// }

// print counting
// void counting(int n){
//   for(int i=1;i<=n;i++){
//     cout<<i<<endl;
//   }
// }
// int main(){
//     int n;
//     cin>>n;
//     counting(n);
//     return 0;
// }

//check prime or not solution 1
// void isprime(int m){
//     int flag =0;
//   for(int i = 2;i<=m/2;i++){
//          if(m%i == 0){
//             flag++;
//              break;
//          }
//          }
//          if(flag==0){
//             cout<<"Prime no.";
//          }
//          else
//            cout<<"Not a Prime Number";
// }
// int main(){
//     int n;
//     cin>>n;
//     isprime(n);
//     return 0;
// }


//solution 2
// bool isprime(int m){
//     for(int i = 2;i<=m/2;i++){
//          if(m%i == 0){
//             return false;
//             break;
//          }
//          }
//          return true;

// }
// int main(){
//     int n;
//     cin>>n;
//     if(isprime(n)){
//         cout<<"prime";
//     }
//     else
//     cout<<"Not Prime";

//     return 0;
// }


//Even or odd
// void evenorodd(int n){
//       if(n&1 == 1){
//         cout<<"Odd no.";
//         }
//         else
//         cout<<"Even no.";
  
// }
// int main(){
//     int n;
//     cin>>n;
//     evenorodd(n);
//     return 0;
// }


//Sum of integer upto n
// int sumuntil(int m){
//     int ans=0;
//   for(int i = 1;i<=m;i++){
//         ans = ans +i;
// }
//  return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"sum until "<<n<<" is "<<sumuntil(n);
//     return 0;
// }


//Sum of even  integer upto n
// int sumuntil(int m){
//     int ans=0;
//   for(int i = 1;i<=m;i++){
//     if(i%2 == 0)
//         ans = ans +i;
// }
//  return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"sum of even intergers until "<<n<<" is "<<sumuntil(n);
//     return 0;
// }


//Area of Circle
// float circleArea(int radius){
//     return 3.14*radius*radius;
// }
// int main(){
//     int r;
//     cout<<"Enter Radius of circle: ";
//     cin>>r;
//     float ans = circleArea(r);
//     cout<<"Area of Circle is: "<<ans;
// }


//Factorial
// int fact(int n){
//     int ans = 1;
//   for(int i =1;i<=n;i++){
//     ans = ans *i;
//   }
//   return ans;
// }
// int main(){
//     int r;
//     cout<<"Enter the Number ";
//     cin>>r;
//     int ans = fact(r);
//     cout<<"Factorial of Number is: "<<ans;
// }


//All prime number till n;

// bool isPrime(int a){
//     for(int i = 2;i<=a/2;i++){
//         if(a%i==0){
//             return false;
//             break;
//         }
//     }
//     return true;

// }

// void primetilln(int n){
//     cout<<1<<endl;
//     for(int i = 2;i<=n;i++){
//         if(isPrime(i)){
//             cout<<i<<endl;

//         }

//     }

// }

// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     primetilln(n);
// }


//Number using digits
// int number(int arr[],int size){
//     int ans = 0;
//     for(int i = 0;i<size;i++){
//         ans = (ans*10) + (arr[i]);
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter how many digits you want to give: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the digits:"<<endl;
//     for(int i =0;i<n;i++){
//         cin>>arr[i];

//     }
//     cout<<"The number generated is: "<<number(arr,n);
// }


// digits from a number

// void digitsfromno(int n){
    
//     for(n;n!=0;n=n/10){
        
//         cout<<n%10<<endl;
//         }
// }

// int main(){
//     digitsfromno(123);
//     return 0;
// }

// km to miles

// float kmtomiles(int n){
//     return 0.621*n;
// }
// int main(){
//     int a;
//     cout<<"Enter the distance in kilometer: ";
//     cin>>a;
//     cout<<"Distance in miles will be: "<<kmtomiles(a);
// }


//Number to binary

// void notobinary(int n){
//         for(int i =31;i>=0;i--){
//             if(n >= pow(2,i)){
//                 cout<<1 ;
//                 n = n - pow(2,i);
//                  }
//             else{
//                 cout<<0 ;
//             }
//         }
// }
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n; 
//     notobinary(n);
// }

//Count all set bit
void setBits(int n){
    int count1 = 0;
        for(int i =31;i>=0;i--){
            if(n >= pow(2,i)){
                count1++;
                n = n - pow(2,i);
                 }
           
        }
        
        cout<<"No. of set Bits are: "<<count1;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n; 
    setBits(n);
}