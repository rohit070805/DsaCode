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
Top Down Memoisation Steps:
    - Create Dp Array
    - Recusrion ke same to same code me Store and return RecursionAns using DP array
    - If ans already exists return ans,dont do the step 2.
*/
