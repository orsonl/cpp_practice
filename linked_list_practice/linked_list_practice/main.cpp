//
//  main.cpp
//  linked_list_practice
//
//  Created by Orson Lin on 6/3/15.
//  Copyright (c) 2015 Orson Lin. All rights reserved.
//

#include <iostream>

using namespace std;

class linked_list{


    struct node{
    
        int val;
        node* next;
    };
private:
    node* head;
    
    
public:
    
    
    linked_list(){
        head = NULL;
    }
    
    
    
    
    void insert_back(int val){
        node* join = new node;
        join->val = val;
        join->next = NULL;
        
        
        node* finder = head;
        
        if (finder == NULL)
            head = join;
        else{
        
        while(finder->next != NULL)
            finder = finder->next;
        
        finder->next=join;
        }
    }
    
    void insert_front(int val){
        node* join = new node;
        join->val = val;
        join->next = head;
        head = join;
    
    
    
    
    }
    
    
    
    
    
    
    

    void print_list(){
        node* printer = head;
        while(printer != NULL)
        {
            cout<<printer->val<<endl;
            printer = printer ->next;
        }
    }







};



















int main(int argc, const char * argv[]) {

    int val;
    linked_list* test = new linked_list();
    while(1)
    {
        cin>> val;
        test->insert_back(val);
        test->print_list();
//        cin>> val;
//        test->insert_front(val);
//        test->print_list();
    
    
    
    
    
    
    
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
