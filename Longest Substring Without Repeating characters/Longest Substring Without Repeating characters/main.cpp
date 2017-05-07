//
//  main.cpp
//  Longest Substring Without Repeating characters
//
//  Created by Orson Lin on 5/26/15.
//  Copyright (c) 2015 Orson Lin. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;




//Given a string, find the length of the longest substring without repeating characters. For example, the longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.





class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int front=0,rear=0;
        int length=0,longest = 0;
        if(s.length()<2)
            return s.length();
            
        while(rear < s.length()-1)
        {
            cout<<"length is "<<endl;
            
            cout<<length<<endl;
            
            cout<<"the string is"<<endl;
            for(int i = front; i <= rear; i++)
            {
                
                
                cout<<s[i]<<endl;
            
            
            
            }
            
            
            if(s[rear]==s[rear+1])
            {
                front = ++rear;
                cout<<"love me harder"<<endl;
//                rear++;
//                front = rear;

                //break;
            }
            
            else
            {

                for(int i = front; i <= rear; i++)
                {
                    if(s[i] == s[rear+1])
                    {
                        front=i+1;
                        
                        break;
                    }

                }
//                cout<<"longest is "<<endl;
                
//                longest= rear - front+1;
//                cout<<longest<<endl;
                rear++;
            }
//            if(rear < s.length()-1)

            length= rear - front+1;
            if(length>longest)
                longest = length;
            
         }
        
        cout <<front<<endl;
        cout <<rear<<endl;
        cout<<"the string is"<<endl;
        for(int i = front; i <= rear; i++)
        {
            
            
            cout<<s[i]<<endl;
            
            
            
        }
        
        
        
        cout<<longest<<endl;
        return longest;
    }
};






int main(int argc, const char * argv[]) {
    
    Solution *test = new Solution;
    
//    test->lengthOfLongestSubstring("abcabcbb");
//    test->lengthOfLongestSubstring("bbbabc");
    test->lengthOfLongestSubstring("aa");
    
    return 0;
}












