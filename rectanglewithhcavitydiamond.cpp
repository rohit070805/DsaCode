#include<iostream>
using namespace std;
int main(){

    int num;
    cin>>num;
    int n = num/2;
    for(int i = 0;i<n;i++){
        for(int j =0 ;j<(2*n)+1;j++){
            if(j<n-i){
                cout<<"*";
            }
            else if (j>n+i){
                cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i = 0;i<n;i++){
        for(int j =0 ;j<(2*n)+1;j++){
            if(j<i+1){
                cout<<"*";
            }
            else if (j>(2*n)-i-1){
                cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
} 
