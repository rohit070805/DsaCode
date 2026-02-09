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
Patterns of Dp:
    - Exclude Include patter {House Robber}
    - All Possible ways {Coin change} 
*/
/*
(5***)DP with Binary Search:
    - Bade ke andr chota fir or chota fir chota aissi sequence ho to ye wala lgta hai
    - Longest Increasing Subsequence
    -
*/