#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {7,2,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    do{
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
            cout<<endl;
    }while(next_permutation(arr , arr + n) == true);

    return 0;
}
