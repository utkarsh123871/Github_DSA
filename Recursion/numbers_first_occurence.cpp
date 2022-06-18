#include <iostream>

using namespace std;

int first_occurence(int *a , int n , int key){
    //base case
    if(n == 0){
        return -1;
    }
    
    if(a[0] == key){
        return 0;
    }
    
    else{
        int i = first_occurence(a+1 , n-1 , key);
        if(i == -1){
            return -1;
        }
        
        else{
            return i+1;
        }
    }
}

int main()
{
    int a[] = {1,1,6,3,4,3,3,7};
    int n = sizeof(a)/sizeof(a[0]);
    
    std::cout << first_occurence(a , n , 6) << std::endl;
    
    return 0;
}
