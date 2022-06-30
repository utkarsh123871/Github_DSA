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

void insertattail(node*&head , int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    
    node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next=new node(data);
}

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}

int length(node*head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

void insertinmiddle(node* &head , int data , int p){
    if(head==NULL || p==0){
        insertathead(head,data);
    }
    
    else if(p>length(head)){
        insertattail(head,data);
    }
    
    else{
        //take p-1 jumps
        int jump=1;
        node* temp = head;
        while(jump<=p-1){
            temp = temp->next;
            jump++;
        }
        
        //create a new node
        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
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

istream& operator>>(istream &is , node* head){
    head = take_input();
    return is;
}

int main()
{
    //node* head = take_input();
    //node* head2 = take_input();
    
    node*head;
    node*head2;
    cin>>head>>head2;
    cout<<head<<head2;
    return 0;
}
