//
//  main.cpp
//  Singly-linked list
//
//  Created by Orson Lin on 5/5/17.
//  Copyright (c) 2017 Orson Lin. All rights reserved.
//

#include <iostream>


using namespace std;
class node{
    public:
        int val;
        node* ptr;
        node(int first_val);
        void insert_ele(node* n, int a);
        void delete_node(node* n, int b);
        //void delete_head(node*& n);
        //void delete_head(node* n);
        void delete_head(node& n);
        void head_change(int new_val);
        void print_all(node* first);
};

node::node(int first_val){
    val = first_val;
    ptr = NULL;
    cout<< "Object_initalized"<<endl;
};

// insertion attemp one
/*
void node::insert_ele(node* n, int a){
    node * current = n;
    //node * current = this;
    while(current->ptr != NULL){
        current = current-> ptr;
    }
    node * next_node = new node(a);
    current->ptr = next_node;
    cout<< "inserted" << endl;
};
*/
// insertion attemp two
void node::insert_ele(node* n, int a){
    while(n->ptr){
        n = n-> ptr;
    }
    node * next_node = new node(a);
    n->ptr = next_node;
    cout<< "inserted" << endl;
};


// delete b from the linked - list
void node::delete_node(node* n, int b){
    if(n->val ==b){
        node* temp = n;
        cout<<endl<<temp->val<<endl;
        *n = *n->ptr;
        cout<<endl<<temp->val<<endl;
        delete temp;
    }
    node* current = n;
    node* next = current -> ptr;
    while(next){
        if(next->val == b){
            //delete current->ptr;
            current->ptr = next->ptr;
            delete next;
        }
        current=current->ptr;
        next= current->ptr;
    };
    cout<< endl << "  deleted"<< endl;
};

/*
// delete attempt 1 error when execute multiple times
void node::delete_head(node* n){
    node* temp = n;
    // changing value in the room and member is allowed, changing itself is not allowed
    *n = *n->ptr;
    //n = n->ptr;
    delete temp;
}
*/


/*
// delete attempt 2   exectue multiple times without errors
void node::delete_head(node*& n){
    node *temp = n;
    // changing value in the room and member is allowed, changing itself is not allowed
    n = n->ptr;
    //n = n->ptr;
    delete temp;
}
*/

// detelet attemp 3  error when execute multiple times
void node::delete_head(node& n){
    node *temp = &n;
    // changing value in the room and member is allowed, changing itself is not allowed
    n = *n.ptr;
    delete temp;
    //delete &n;
}




void node::head_change(int new_val){
    this->val = new_val;
}


void node::print_all(node* first){
    node* current = first;
    while (current) {
        cout<< " -> " <<current-> val;
        current = current->ptr;
    };
}

int main(int argc, const char * argv[]) {
    node *first_node = new node(1);
    first_node->insert_ele(first_node, 2);
    cout <<first_node->ptr->val <<endl;
    first_node->insert_ele(first_node, 3);
    first_node->insert_ele(first_node, 4);
    first_node->print_all(first_node);
  
///*
    first_node->delete_head(*first_node);
    cout<<endl;
    first_node->print_all(first_node);
//    first_node->delete_head(*first_node);
    cout<<endl;
//    first_node->print_all(first_node);

    
    
    //*/
    
/*
    first_node->delete_node(first_node,  1);
    first_node->print_all(first_node);
    first_node->delete_node(first_node,  2);
    first_node->print_all(first_node);
*/
 
    return 0;
}
