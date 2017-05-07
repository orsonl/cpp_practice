//
//  main.cpp
//  Longest Palindromic Substring
//
//  Created by Orson Lin on 5/27/15.
//  Copyright (c) 2015 Orson Lin. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;



class Solution {
public:
    string longestPalindrome(string s) {
        
        string longest = "";
        int length = 0;
        int posi = 0;
        int sI, eI;
        
        if(s.length()<=1)
        {
            cout<<s<<endl;
            return s;
        }
        
        for(int i = 0; i < s.length()-1; i++)
        {
            cout<<"fucker"<<endl;
        
            if(s[i] == s[i+1])
            {
                sI = i;
                eI = i+1;
                search(sI, eI, s, posi, length);
            
            }
            
        
                sI = eI = i;
                search(sI, eI, s, posi, length);
            
        
        }
        cout<< length<<endl;
        cout<< s.substr(posi, length) <<endl;
        return s.substr(posi, length);
    }
    
    
    void search(int sI, int eI, string& s, int& posi, int& length) {
    
        int i =1;
        cout<<"sI is "<<sI<<endl;
        cout<<"eI is "<<eI<<endl;

        while (sI - i >= 0 && eI + i < s.length())
        {
            if(s[sI-i] != s[eI+i])
            {
                break;
            }
            i++;
            
        }
        
        int wid = eI -sI + 2*i -1;
        
        if(wid > length)
        {
            length = wid;
            posi = sI - i +1;
        }
    }
};









int main(int argc, const char * argv[]) {
    
    
    
    
    Solution *test = new Solution;
    
    test->longestPalindrome("ccc");
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
