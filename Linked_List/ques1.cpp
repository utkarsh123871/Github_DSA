#include <iostream>
#include <iterator>
#include <list>

using namespace std;

class node{
public:
    int data;
    node* next;
    
    node(int d){
        data = d;
        next = NULL;
    }
};

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

node* take_input(int n){
    node* head = NULL;
    int d;
    for (int i = 0; i < n; i++) {
        cin>>d;
        insertattail(head , d);
    }
    return head;
}

node* merge(node*a , node*b){
	// base case
	if(a == NULL){
		return b;
	}
	if(b == NULL){
		return a;
	}

	// recursive case
	node*c;
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

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main() {
	int t;
	long long int n1,n2;
	cin>>t;
	cin>>n1;
	while(t>0){
    	node* a = take_input(n1);
        
        cin>>n2;
        node* b = take_input(n2);
    
    	node* c = merge(a , b);
    	print(c);
    	t--;
	}
	return 0;
}
