//algorithms of binary_search 
//Condition of algorithm: Array should be sorted
#include <iostream> 
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int key;
    std::cout << "Enter the key you want to search in array" << std::endl;
    cin>>key;
    
    bool present = binary_search(arr , arr+n , key);
    
    if(present == true){
        std::cout << "Key is present"<<std::endl;
    }
    
    else{
        std::cout << "Key is not present" << std::endl; //
    }
    return 0;
}
