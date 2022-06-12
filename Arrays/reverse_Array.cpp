// Reverse an Array
#include <iostream>

using namespace std;

void Reverse_Array(int a[] , int N){
    int i;
    for (int i = N-1; i>=0 ; i--) {
        std::cout << a[i] << std::endl;
    }
}

int main()
{
    int i , N , arr[100];
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
    
    Reverse_Array(arr , N);
    return 0;
}
