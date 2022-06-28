#include <iostream>

using namespace std;

class node{
public:
    int data;
    node *next;
    
    node(int d){
        data = d;
        next = NULL;
    }
};

// Functions (Procedural Programming)
//passing a pointer by reference
void insertathead(node* &head , int d){
    if(head == NULL){
        head = new node(d);
        return;
    }
    
    node *n = new node(d);
    n->next = head;
    head = n;
}

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    node* head = NULL;
    insertathead(head,3);
    insertathead(head,2);
    insertathead(head,1);
    insertathead(head,0);
    print(head);
    print(head);
    return 0;
}


/*
//Linked class(OOPS)
class linkedlist{
    node* head;
    node* tail;
    
public:
    linkedlist(){
        
    }
    
};
*/
