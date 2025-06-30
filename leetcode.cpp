#include<iostream>
// 442
// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         int size = nums.size();
//         vector<int> dummy(size+1,0);
//         vector<int> result;
//         for(int i =0;i<size;i++){
//             int a = nums[i];
//             if(dummy[a] == 0){
//               dummy[a] = nums[i];
//             }
//             else{
//                 result.push_back(a);
//             }

//         }
        

//         return result;
//     }
// };



// // method 2
//     void sortColors(vector<int>& nums){
//     int left = 0,right=nums.size()-1;
//     int size= nums.size();
//      for(int i =0;i<=right;){
//         if(nums[i]==0){
//            swap(nums[i],nums[left]);
//             left++;
//             i++;
//         }
//         else if(nums[i]==2){
//             swap(nums[i],nums[right]);
//             right--;
//         }
//         else {
//            i++;
//         }
//      }
     
//     }  

void printvector(vector<int> v) {
  cout << "Printing vector " << endl;
  int size = v.size();
  for (int i = 0; i < size; i++) {
    cout << v[i] << " ";
    // cout << v.at(i) << " ";
  }
  cout << endl;
} 

// int main(){
//     vector<int> nums;
//     int n;
//     cout<<"Enter the number of colour code elements:"<<endl;
//     cin>>n;
//     cout<<"Enter the colour code elements:"<<endl;
//     for(int i = 0;i<n;i++){
//         int d;
//         cin>>d;
//         nums.push_back(d);
//     }
//     sortColors(nums);
   
//     printvector(nums);
 

// }


// 189 rotate by k steps

// void rotate(vector<int>& nums,int k){
//          int n = nums.size();
//          vector<int> ans(n);
//          for(int i =0 ;i<n;i++){
//             int i2 = (i+k)%n;
//             ans[i2]= nums[i];
//          }
//          nums = ans;
// }
        

// int main(){
//     vector<int> nums;
//     int n,k;
//     cout<<"Enter the number of elements:"<<endl;
//     cin>>n;
//     cout<<"Enter the elements:"<<endl;
    
//     for(int i = 0;i<n;i++){
//         int d;
//         cin>>d;
//         nums.push_back(d);
//     }
//     cout<<"enter value of k:";
//     cin>>k;
//     rotate(nums,k);
   
//     printvector(nums);
 

// }

// 268
int missingNumber(vector<int> nums){
  
  int sum = 0;
  int size = nums.size();
  int arthsum = (size*(size+1))/2;

 
  for(int i = 0;i<size;i++){
    sum = sum+ nums[i];
  }
   
     return arthsum - sum;
}


int main(){
    vector<int> nums;
    int n;
    cout<<"Enter the number of colour code elements:"<<endl;
    cin>>n;
    cout<<"Enter the colour code elements:"<<endl;
    for(int i = 0;i<n;i++){
        int d;
        cin>>d;
        nums.push_back(d);
    }
    int x = missingNumber(nums);
    if(x == -1){
      cout<<"No missing number ";
    }
    else{
      cout<<"Missing number is : "<<x;
    }
    return 0;

}

// Max number of ones in row

vector<int> rowAndMaximumOnes(vector<vector<int>>& mat){
  int row = mat.size();
  vector<int> count;
  for(int i = 0;i<row;i++){
    int count1 =0;
    for(int j = 0;j<mat[i].size;j++){
        if(mat[i][j]==1){
          count1++;
        }
    }
    count.push_back(count1);
}
int ones =0;
for(int i =0;i<row;i++){
  if(count[i]>=ones){
    ones = count[i];
    int finalrow = i;
  }
}
return mat[i][];

}



