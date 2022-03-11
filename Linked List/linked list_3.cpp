#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data){
        this -> data =data;
        next = NULL;
        }
};

Node* takeInput_Better(){
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
        head = newNode;
        tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = tail->next;
            //or
            //tail = newNode;
            }
            temp -> next = newNode;
        }
        cin>>data; // enter next node data again
    }
    return head;
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){

    cout<<temp -> data<<" ";
    temp = temp -> next;
    }
}

int main(){
    Node *head = takeInput();
    print(head);
}

