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

void reverse(node* &head){
    node* current = head;
    node* previous = NULL;
    node* N = NULL;
    
    while(current != NULL){
        N = current->next;
        current->next = previous;
        previous = current;
        current = N;
    }
    
    head = previous;
    
}

int main()
{
    node* head = take_input();
    cout<<head;
    reverse(head);
    cout<<head;
    return 0;
}
