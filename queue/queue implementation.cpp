#include <iostream>

using namespace std;

class queue{
    public:
    
        int *arr;
        int front , rear , current_size , max_size;
        queue(int default_size = 5){
            arr = new int[default_size];
            current_size = 0;
            max_size = default_size;
            front = 0;
            rear = max_size-1;
        }
        
        bool full(){
            return current_size == max_size;
        }
        
        bool empty(){
            return current_size == 0;
        }
        
        void push(int data){
            if(!full()){
                rear = (rear + 1)%max_size;
                arr[rear] = data;
                current_size++;
            }
        }
        
        
        void pop(){
            if(!empty()){
                front = (front + 1)%max_size;
                current_size--;
            }
        }
        
        int front_function(){
            return arr[front];
        }
        
        ~queue(){
            if(arr!=NULL){
                delete [] arr;
                arr = NULL;
            }
        }
        
};

int main()
{
    queue q;
    for (int i = 1; i <= 6; i++) {
        q.push(i);
    }
    
    q.pop();
    q.pop();
    
    q.push(7);
    
    while(!q.empty()){
        std::cout << q.front_function() << std::endl;
        q.pop();
    }

    return 0;
}
