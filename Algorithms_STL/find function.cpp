#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int arr[] = {5 , 4 , 7 , 6 , 0 , 1};
    int n = sizeof(arr)/sizeof(arr[0]);  
    
    int key;  
    cin>>key;
    
    int *ans = find(arr , arr+n , key); // stl
    
    int index = ans - arr;  // this will return the index at which ans is present 
                          // subtracting the address gives us the index of ans address bucket

    if(index == n){
        std::cout << "Key is not found" << std::endl;
    }
    
    else{
        std::cout << "Key is found at index " << index <<std::endl;
    }
    return 0;
}
