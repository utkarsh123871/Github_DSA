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

// this function is created to make input much better and in a easy way
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
            //or you can use the below statement
            //tail = newNode;
            }
        cin>>data; // enter next node data again
    }
    return head;
}

void insertNode(Node *head , int i , int data){
    Node* newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    while(count <  i-1){
        temp = temp->next;
        count++;
    }

    Node *a = temp -> next;
    temp -> next = newNode;
    newNode -> next = a;
}

void print(Node *head){
    while(head != NULL){
    cout<<head -> data<<" ";
    head = head -> next;
    }
}

int main(){

    Node *head = takeInput_Better();
    print(head);
    cout<<endl;
    cout<<"Enter the data and the index at which u want data to be entered"<<endl;
    int i , data;
    cin >> i >> data;
    insertNode(head , i , data);
    cout<<"New Linked List"<<endl;
    print(head);
    return 0;

}

