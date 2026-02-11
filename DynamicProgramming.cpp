/*
Quotes:
    - Optimisation over plain recusrion.
    - Breaking problems in sub problem.
    - Someone who forgets history,Repeats it.

DP can be applied where{Useless defination}
    - Overlapping subproblem {Ek  solved cheez ko dobara solve krna}
    - Optimal SubStructure { bdi problem ka soltion choti me bhi dikh rha ho i.e Recusion}

Desi {Useful}:
    - Jo chiz ke bar krdi use dobara solve krne nhi aaunga,Qki maine answer store kra hua hai.

DP Types
    - Top Down {Recusrion + Memoization} 
    - Bottom Up {Tabulation} (Faster)
    - **Pattern --->>>>  Space Optimisation (if Possible)
    - Complexity of both top down and bottom up same but bottom is iterative so better
    - **Possiblity is there top down doesnot work but bottom up woks as bottom up remove recursion function overhead.

*/

/*
Top Down Memoisation Steps:{give number ->>>> base case}
    - Create Dp Array
    - Recusrion ke same to same code me Store and return RecursionAns using DP array
    - If ans already exists return ans,dont do the step 2.
*/

/*
Bottom Up/Tabulisation:{base case->>>>> given number} 
    - Agar hme shuru ke base case ka answer pta ho to recusrion relation ka use krke aage ka build kr skte
    - Steps
        - Create a dp Array.
        - Fill dp array for known base cases
        - Fill remaining dp Array using logic of recursive relation.{for loop ki condition dhyan se dekho}
            - For loop k andr fill krte time recursive calls ko copy paste krne ke bad unhe dp[] ke according convert krna hai
        - return vo krna hai ,jo agr hm top down use krte to usme bhejta (i.e : n in fibonnaci)
*/

/*
Space Optimisation:{Only in bottom UP}
    - Tabulisation me dp fill krne wale loop me jao
    - Yha dp[i] ko pkdo or check kro kya koi pattern dikh rha hai{Kya dp[i] kisi or pe depend kr rha hai}
    - Agar pattern me current elemnt 2 ya 3 phle ke elements pe hi depend krta hai to
    - Istead of using full array for dp use only those two variable.{like prev1 and prev2 in fibonnaci}
*/

/*
Dimension of DP array
    - Go to the Normal recursion code
    - Here see how many parameters of function are changing during recursion call
*/


/*
Important Tips:
    - Ho skta Top Down and Bottom Up approach ki DP array alag alag ho hmesha soch smjh k krna copy paste nhi
    - (5*****)Hmahesha recursion ache se likho,base case ek hi rkho vrna tabulation me dikat aayegi baki ki case me check krke hi recusrion call lgao taki invalid call jaye hi na
    - 2D dp me space optimisation ke liye check kro ki 1d array se bhi kr skte hai kya,kya job answer hai ko kisi constant row ya column ki array pe depend kr rha hai.
        - Abhi ye 2 arrays jo hongi unhe hm ek me bhi convert kr skte hai bs ye dekho jo element hai jo apne bad wale pe depend kr rha ya phle wale pe, 
        - agr bad wale pe to 0 ->>n jao or phle wale pe to n ->> 0 jao using single array.
    - TopDown me agar TLE mar rha ho to jo variables change nhi ho rahe unhe By refrence pas krdo.
    - Space Optimised me jo curr se equate jo varibale kr rhe ho unme se dono ko return krake dekho ,high chances current na chale.
    - (5*****)Bottom Up tip
        - Jitne bhi base cases likhe hai recursion me ,loops me ghusne se phel unhe table me fill karo.
    -   5**********
            - Agar curr wala khud pe bhi depend kr rha hai tabulation me to use bhi phle fill krna pdegaa.
    - Index Shifting:dp me agar tum kisi vjh se -1 bhi include krna pd rha to dono bottomup and topdow me index shift krdo d[-1] = d[0];
        - BottomUp me to hr jgh kro shifting same copy paste krke jha bhi use ho rha hp
*/







/*
(5***)DP with Binary Search:
How to catch:
    * Aisa case jha ye likha ho sequence tbhi bnegi jb ek ke upr ek chota ya bda aayega 
    * or return count krana ho ki kitne aa skte
Questions:
    - Longest Increasing Subsequence
    - Russian Dolls
Method:
  int solveUsingBS(vector<int>& nums){
        vector<int> ans;
        ans.push_back(nums[0]);
        
        //     - Isme basically ye hai ho rha hum traverse krte ja rhe
        //     - Agar last wale se bda element aa rha to use sidha push krdo qki condition valid hai
        //     - Agar chota aarha to,check kro is chote ke equal ya is se just bda konse index pe hai
        //     - Us jagah use daldo
        //     - Agar last index pe hi hua to manlo us last wale ko count nhi kiya or ise kr liya
        //     - QKi chote wala or options bhi dega aage jake count bdhayega hi
        //     - or kahi bich me aarha hai to manlo ise uski jagah rkdo 
        //     - manlo aage aise elements aagye ki is se to bde hai or iske aage jitne hai unse chote 
        //     - to hm ye consider kr lenge ki yaha se shuru kiya tha count krna{jaha bich me dala hai ye}
        
        
        // Example:
        // ans = [5,7,25] ye sare isi sequence me aaye the
        // - element =6
        // ans = [5,6,25] 
        // - case 1
        //     - Abhi agar sare elements 25 se bde aaye the unhe daldeneg or final ans me count dekhnge 
        //     - Par actual subsequence hogi{ 5,7,25,.. .. ..}
        // - case 2
        //     - ek elemnee aagya 6 ko 25 ke bich
        //     ans = [5,6,17]
        //     - ab 25 or 7 ko bhul jao or actual subsequnce ho jayegi {5,6,17} amd so on for further elements

        
        for(int i =0;i<nums.size();i++){
            if(nums[i]>ans.back()) ans.push_back(nums[i]);
            else{
                int start =0;
                int end = ans.size()-1;
                int indexofSmallestLargerNumber =0;
                while(start<=end){
                    int mid = start + (end-start)/2;

                    if(ans[mid]<nums[i]){
                        start = mid+1;
                    }else{
                        indexofSmallestLargerNumber = mid;
                        end = mid-1;
                    }
                }
                ans[indexofSmallestLargerNumber] = nums[i];
            }
        }
        return ans.size();
    }
*/

/*
Merge Intervals Pattern:
    - Isme puri ek range de rkhi hogi 
    - or hr element pe jake curr ka answer then iske left and iske right ka answer compute krna hoga
    - Iske liye use for loop to create a break at every possible point,
    - find out curr left and right answer
    - Compare and store answer according to the given case max or min where
    - Inme Space Optimisation possible nhi hoti.
*/
/*
Patterns of Dp:
    - Exclude Include patter {House Robber}
    - All Possible ways {Coin change} 
    - Longest Increasing SubSequence(Binary Seacrh withDP)
    - Merge Interval Pattern
*/