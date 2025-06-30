 
//  leetcode 249 google asked
 #include<iostream>
 #include<map>
 #include<string>
 #include<vector>
 using namespace std;

 string typeofString(string s){
       string temp = "";
       for(int i =0;i<s.length();i++){
        if(i==s.length()-1){
            temp.push_back('0');
            return temp;
        }
        if(s[i+1]-s[i]>=0){
          
            temp+=to_string(s[i+1]-s[i]);
        }else{
            
             temp+=to_string(s[i+1]-s[i]+26);
        }
        
       }
       return temp;
 }
 int main(){
    vector<string> v={"abc", "bcd", "acef", "xyz", "az", "ba", "a", "z"};
    map<string,vector<string>> m;
    vector<vector<string>> ans;
    for(auto s:v){
        m[typeofString(s)].push_back(s);
    }
    
    for(auto k:m){
        ans.push_back(k.second);
    }

    for(auto z:ans){
        for(auto temp:z){
            cout<<temp<<" ";
        }
        cout<<endl;
    }
    

    return 0;
 }

// // Online C++ compiler to run C++ program online
// #include <iostream>
// #include <queue>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool isvalid( vector<int>& memReq,vector<int>& memAvail, int additional) {
//     bool usedAdditional = false;
//      int j =0;
//     for (int i = 0; i < memReq.size(); i++) {
//        if(j<memAvail.size()&& memAvail[j]>=memReq[i]){
//            j++;
//        }
//        else if(memReq[i]<=additional && !usedAdditional){
//            usedAdditional = true;
//        }
//        else{
//            return false;
//        }
//     }

//     return true;
// }
// int main(){
   
//     int n = 3;
//     vector<int> memReq = {4,1,2};
//     vector<int> memAvail = {3,4};
//     sort(memReq.begin(),memReq.end(),greater<int>());
//     sort(memAvail.begin(),memAvail.end(),greater<int>());
    
//     // if(memReq[0]>memAvail[0]) {
//     //     cout<<memReq[0];
//     // }
//     int high = memReq[0];
//     int low = 1;
//     int ans=-1;
//     int additional = low + (high-low)/2;
   
//     while(low<=high){
//         additional = low + (high-low)/2;
      
//         if(isvalid(memReq,memAvail,additional)){
//             ans = additional;
//             high = additional-1;
//         }
//         else{
//             low = additional+1;
//         }
//     }
    
//    cout<<ans;
//     return 0;
// }