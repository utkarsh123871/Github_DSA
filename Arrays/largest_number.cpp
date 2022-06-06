#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1 , 6 , 5 , 7 , 0};
    int a = arr[0];
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1 ; i < arrsize; i++) {
        if(a < arr[i]){
            a = arr[i];
        }
    }
    std::cout << "Largest Number is: " << a << std::endl;
    return 0;
}
