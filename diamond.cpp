#include<iostream>
using namespace std;
//yha par apan aisa pattern bna rhe
//    * 
//   * * 
//  * * * 
// * * * * 
// * * * * 
//  * * * 
//   * * 
//    *   
// to star pr space ko pair lia hai 
        
int main(){
    int num;
    cin >> num;
    int n = num/2;
     for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
        cout<<" ";
        }
        for(int k = 0;k<i+1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
        cout<<" ";
        }
        for(int k = 0;k<n-i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0 ;
    
} 

