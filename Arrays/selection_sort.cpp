#include <iostream>

using namespace std;

int main()
{
    int arr[] = {5,3,4,2,1,78,54,63,14,20,96,69};
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    
    std::cout << "Before Swapping" << std::endl;
    for (int i = 0; i < arrsize; i++) {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
    
    for (int i = 0; i < arrsize-1 ; i++) {
        int min = i;
        for (int j = i+1 ; j < arrsize ; j++) {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i] , arr[min]);
    }
    
    std::cout << "After Swapping" << std::endl;
    for (int i = 0; i < arrsize; i++) {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
    return 0;
}
