#include<iostream>
#include<vector>

using namespace std;
void print(int * arr,int i,int j){
    while(i<=j){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
}
void printsubarrays(int * arr,int n,int& i,int& j){
    if(i>=n) return;
    if(j>=n){
        
        j=i+1;
        return ;
    }
    print(arr,i,j);
    j=j+1;
    printsubarrays(arr,n,i,j);
    i=i+1;
    printsubarrays(arr,n,i,j);

}
//2,3,4,1,5
void includeexclude(string str,string output,int size,int index){
    if(index>=size) return;
    
    output.push_back(str[index]);
   
    includeexclude(str,output,size,index+1);
    cout<<output<<endl;
    output.pop_back();
   
    includeexclude(str,output,size,index+1);
    cout<<output<<endl;
 
}
int binarySearch(int*arr,int s,int e,int target){
    if(s>e) return -1;
    int mid = s+(e-s)/2;
    if(arr[mid]==target) return mid;
    if(arr[mid]>target){
        return binarySearch(arr,s,mid-1,target);
    }
    else{
        return binarySearch(arr,mid+1,e,target);
    }
}

bool isSorted(int *arr,int index,int size){
 if(index>=size-1) return true;
 if(arr[index]>arr[index+1]) return false;
 return isSorted(arr,index+1,size)  ; 
}

vector<int> storedigits(int n){
    vector<int> digits;
    if(n==0){
        return digits;
    }
    digits = storedigits(n/10);
    
    digits.push_back(n%10);
    return digits;

   
}
int minn(int *arr,int index,int size){
    if(index==size-1){
        return arr[index];
    }

    int ans = arr[index]<minn(arr,index+1,size)?arr[index]:minn(arr,index+1,size);
    return ans;
}

int maxx(int *arr,int index,int size,int & maxy){
    if(index>=size){
    return maxy;
    }
    if(maxy<arr[index]) maxy = arr[index];
    maxx(arr,index+1,size,maxy);
}

int search(int *arr,int size,int index,int target){
    if(index>=size) return -1;
    if(arr[index]==target) return index;
    int ans = search(arr,size,index+1,target);
    return ans;
}

void printallocc(int *arr,int size,int index,int target){
if(index>=size) return;
if(target == arr[index]) cout<<index<<" ";
printallocc(arr,size,index+1,target);
}


void splq(int *arr,int size,int index,vector<int> &v){
if(index>=size) return;
if(arr[index]%2==0){
v.push_back(arr[index]);
}
splq(arr,size,index+1,v);
}

int main(){
    int arr[5]={2,3,4,5,6};
    int i=0,j=0;
    printsubarrays(arr,5,i,j);
    //cout<<binarySearch(arr,0,4,9);
    //includeexclude("abc","",3,0);
    // cout<<isSorted(arr,0,5);
    // vector<int> v = storedigits(1234);
    
    //cout<<search(arr,5,0,1);

    // int maxy=-1;
    // maxx(arr,0,5,maxy);
    // cout<<maxy;


    // printallocc(arr,5,0,2);
    //splq(arr,5,0,v);

    // for(int i =0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }


    //cout<<minn(arr,0,5);
    return 0;
}