#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i =0;i<n;i++){
    for(int j = 0;j<(2*n) - 1;j++){
        if(j<n-i-1){
            cout<<" ";
        }
        else if(j>=n-i-1 && j<= n-1+i){
            cout<<"*";
        }
        else
        cout<<" ";

    }
    cout<<endl;

   }
       
}