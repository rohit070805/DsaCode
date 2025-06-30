#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
 
//R tak cover krne me kon kon se primes lgenge <=root(r) se niche ke sare primes nikal lenge
vector<int> basePrimes(int n){
    vector<int> primes;
    vector<bool> seive(n+1,true);
    seive[0]=seive[1]= false;
    for(int i =2;i*i<=n;i++){
       if(seive[i]){
        int j = i*i;

        while(j<=n){
          seive[j]=false;
          j = j+i;
        }
       }
    }
    for(int i =0;i<=n;i++){
        if(seive[i])primes.push_back(i);
    }
    return primes;
}

//abhi jo seive l se sare ke bich bn ne wala tha usi same ko apn 0 se r-l+1 index tak cast kr rhe hai,isiliye j - L kiya hai
vector<bool> segmenseive(int l,int r){
    vector<int> baseprimes = basePrimes(sqrt(r));
    vector<bool> seive(r-l+1,true);
    if(l==1) seive[0] = false; //agar l = 1 hua to zero ko false karna hoga qki vo niche ke loops se nahi ho payega khud qki starting prime hi 2 hoga baseprimes me
    if(l==0) seive[0]=seive[1]=false; //agar l = 0 hua to 0 aur 1 ko false karna hoga qki vo niche ke loops se nahi ho payenge qki starting bseprime hi 2 hai
    for(int i =0;i<baseprimes.size();i++){
        int p = baseprimes[i];
        
    int firstmul = (l/p)*p;
    firstmul = firstmul<l?firstmul+p:firstmul;
    
    int j = max(firstmul,p*p);
    while (j<=r)
    {
        seive[j-l]=false;
        j = j+p;
    }
    
}
return seive;
}

//jo 0 se r-l+1 index tak ka array bnke aayega us se value fetch kr rhe hai, isiliye i+Lkiya hai
int main(){
    
    vector<bool> s = segmenseive(110,130);
    for(int i =0;i<s.size();i++){
    if(s[i]) cout<<i+110<<" ";
    }
    return 0;
}