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

node* take_input(){
    int d;
    std::cin >> d;
    
    node*head = NULL;
    
    while(d!=-1){
        insertathead(head , d);
        cin>>d;
    }
    return head;
}

ostream& operator<<(ostream &os , node* head){
    print(head);
    return os;
}

node* recreverse(node*head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    
    node* shead = recreverse(head->next);
    node* temp = shead;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    head->next=NULL;
    temp->next=head;
    return shead;
}

node* midpoint(node*&head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    
    node* slow = head;
    node* fast = head->next;
    
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    
    return slow;
}

node* kth_element_from_end(node*&head , int k){
    if(head==NULL or head->next==NULL){
        return head;
    }
    
    node* slow = head;
    node* fast = head;
    
    while(k>0){
        fast = fast->next;
        k--;
    }
    
    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    
    return slow;
}

//merging LL function using merge fucntion
node* merge(node*a , node*b){
    //base case
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    
    node* c;
    
    // recursive case
    if(a->data < b->data){
        c = a;
        c->next = merge(a->next , b);
    }
    
    else{
        c = b;
        c->next = merge(a , b->next);
    }
    
    return c;
}


int main()
{
    node* a = take_input();
    node* b = take_input();
    
    cout<<"Linked List A"<<endl;
    cout<<a;
    cout<<endl;
    
    cout<<"Linked List B"<<endl;
    cout<<b;
    cout<<endl;
    
    cout<<"Merged Linked List"<<endl;
    node* c = merge(a,b);
    cout<<c;
    return 0;
}
