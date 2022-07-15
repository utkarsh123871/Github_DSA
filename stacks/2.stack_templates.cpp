#include <iostream>
#include <vector>

using namespace std;

template<typename T , typename U>
class stack{
private:
    vector<T> v;
    vector<U> v2;

public:
    void push(T data){
        v.push_back(data);
    }
    
    void pop(){
        if(!empty()){
            v.pop_back();
        }
    }
    
    bool empty(){
        return v.size() == 0;
    }
    
    T top(){
        return v[v.size() - 1];
    }
};

int main()
{
    // stack<int> s;
    // for (int i = 0; i <= 10; i++) {
    //   s.push(i*i);
    // }
    
    // while(!s.empty()){
    //     std::cout << s.top() << std::endl;
    //     s.pop();
    // }
    
    stack<char , int> s;
    for (int i = 65; i <= 129; i++) {
       s.push(i);
    }
    
    while(!s.empty()){
        std::cout << s.top() << std::endl;
        s.pop();
    }
    return 0;
}
