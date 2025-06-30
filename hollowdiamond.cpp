#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int n = num/2;
    
     for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
        cout<<" ";
        }
        
        for(int j =0;j<2*i+1;j++){
           if(j==0 || j == 2*i)
            cout<<"*";
            else
            cout<<" ";
       
    }
    cout<<endl;
     }
    for (int i =0;i<n;i++){
        for(int j= 0;j<i;j++){
            cout<<" ";
        }
        for(int j =0;j<2*(n-i)-1;j++){
            if(j==0||j ==2*(n-i)-2)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
