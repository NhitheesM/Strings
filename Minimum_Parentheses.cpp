#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    int n=pattern.length();
    int open=0;
    int close=0;
    int wanted_paran=0;
    for(int i=0;i<n;i++){
        if(i==0&&pattern[0]==')'){
            wanted_paran+=1;
        }else if (pattern[i]=='('){
            open+=1;
        }else if (pattern[i]==')'&&open>0){
            open-=1;
        }else{
            close+=1;
        }
    }
    
    wanted_paran+=open+close;

    return wanted_paran;
    
}
