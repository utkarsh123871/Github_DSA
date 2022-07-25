#include <iostream>
#include <list>

using namespace std;

class queue{
    int current_size;
    list<int> l;
    
    public: 
        queue(){
            current_size = 0;
        }
        
        bool isempty(){
            return current_size == 0;
        }
    
        
        void push(int data){
                l.push_back(data);
                current_size++;
        }
        
        void pop(){
            if(!isempty()){
                l.pop_front();
                current_size--;
            }
        }
        
        int front_function(){
            return l.front();
        }
};

int main()
{
    queue q;
    for (int i = 0; i <= 10 ; i++) {
        q.push(i);
    }
    
    while(!q.isempty()){
        std::cout << q.front_function() << std::endl;
        q.pop();
    }

    return 0;
}
