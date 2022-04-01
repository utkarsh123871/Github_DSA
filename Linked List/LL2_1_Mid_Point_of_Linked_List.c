#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this -> data = data;
            next = NULL;
        }
};

void print(Node *head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void odd(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    cout<< slow->data;
}

void even(Node *head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    cout<< slow->data;
}

int main()
{
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    // Node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    // n4.next = &n5;

    print(head);
    cout<<endl;
    even(head);
    return 0;
}
