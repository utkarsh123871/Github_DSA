#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int>&s , int element){
    if(s.size()==0){
        s.push(element);
        return;
    }
    
    int temp = s.top();
    s.pop(); 
    insert(s,element);
    s.push(temp);
}

void reverse(stack<int>&s){
    if(s.size()==1 or s.size()==0){
        return;
    }
    
    int temp = s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
    return;
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
