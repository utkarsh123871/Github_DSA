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
//passing a pointer by reference to get changes in main also
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

void deletehead(node*& head){
    if(head==NULL){
        return;
    }  
    node* temp = head->next;
    delete head;
    head = temp;
}

void deletemiddle(node* head, int data)
{
    node* temp = head;
    node* prev = NULL;
    
    if (temp != NULL && temp->data == data)
    {
        head = temp->next; // Changed head
        delete temp;            // free old head
        return;
    }
 
    // Else Search for the key to be deleted,
    // keep track of the previous node as we
    // need to change 'prev->next' */
      else
    {
    while (temp != NULL && temp->data != data)
    {
        prev = temp;
        temp = temp->next;
    }
 
    // If key was not present in linked list
    if (temp == NULL)
        return;
 
    // Unlink the node from linked list
    prev->next = temp->next;
 
    // Free memory
    delete temp;
    }
}


int main()
{
    node* head = NULL;
    insertathead(head,5);
    insertathead(head,2);
    insertathead(head,1);
    insertathead(head,0);
    print(head);
    
    std::cout << "printing in middle " << std::endl;
    insertinmiddle(head,4,3);
    print(head);
    
    std::cout << "printing in end " << std::endl;
    insertattail(head,7);
    print(head);
    
    std::cout << "deletion " << std::endl;
    deletemiddle(head,2);
    print(head);
    return 0;
}
