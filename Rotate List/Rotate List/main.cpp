//
//  main.cpp
//  Rotate List
//
//  Created by Orson Lin on 6/3/15.
//  Copyright (c) 2015 Orson Lin. All rights reserved.
//

#include <iostream>

using namespace std;








/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
/*
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL){}
    };
*/
public:
    
/*
    Solution(){
        head =NULL;
    }
    
    
    
    void insert(int value){
        ListNode *node = new ListNode(value);
        head->next = node;
    }
    
 */
    
    

    
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL){}
    };
    
 
    
    
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        
        
        if(head==NULL || head->next == NULL)
        {
            cout<<head->val<<endl;
            return head;
        }
        
        
        
        for(int i = 0;i<k;i++)
        {
        
        
        ListNode* finder = head;
        
        while(finder->next->next != NULL)
            finder = finder->next;
        
        
        finder->next->next = head;
        head = finder->next;
        finder->next = NULL;
            
        
        }
        
        
        
        ListNode* printer = head;
        while(printer!= NULL)
        {
        
            cout<<printer->val<<endl;
            printer = printer->next;
        
        }
            
        
        return head;
        
    }
};






int main(int argc, const char * argv[]) {
    
    
    
    Solution::ListNode* input1 = new Solution::ListNode(1);
//    Solution::ListNode* input2 = new Solution::ListNode(2);
//    Solution::ListNode* input3 = new Solution::ListNode(3);
//    Solution::ListNode* input4 = new Solution::ListNode(4);
//    Solution::ListNode* input5 = new Solution::ListNode(5);
    
    
//    input1->next = input2;
//    input2->next = input3;
//    input3->next = input4;
//    input4->next = input5;
    
    
    
    Solution* test = new Solution;
    
    test-> rotateRight(input1, 10);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}
