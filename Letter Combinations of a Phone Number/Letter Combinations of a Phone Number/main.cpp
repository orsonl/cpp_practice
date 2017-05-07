//
//  main.cpp
//  Letter Combinations of a Phone Number
//
//  Created by Orson Lin on 6/2/15.
//  Copyright (c) 2015 Orson Lin. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Solution {
public:
    string index[8];
    void comb(const string digits, int p, string c,vector<string> &res){
        if (c.size()==digits.size()){
            res.push_back(c);              //把一個完整的答案貼上去
        }else{
            int d = digits[p]-'0'-2;       //'0'是啥  somehow string 就變 int 了. 就接受吧...背起來
            for (int i=0;i<index[d].size();i++){        //for loop的邊境條件為 跑完所有可能性前就繼續一直跑
                c=c + index[d][i];
                comb(digits,p+1,c,res);
                c=c.substr(0,c.size()-1);          //這行的意義在哪? ans: 因為這個loop 是看最新要加什麼 這行等於是
            }                                      //刪掉最後一個元素  也就是此loop第一行加入的元素
        }
    }
    
    vector<string> letterCombinations(string digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        index[0]="abc";
        index[1]="def";
        index[2]="ghi";
        index[3]="jkl";
        index[4]="mno";
        index[5]="pqrs";
        index[6]="tuv";
        index[7]="wxyz";
        vector<string> res;
        
        if (digits=="")
            return res;
        
        
        
        comb(digits,0,"",res);
        
        
        for(int i= 0; i <= res.size();i++)
            cout << res[i]<<endl;
        return res;
    }
};









int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    
    Solution *test = new Solution;
    
    test->letterCombinations("2");
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}
