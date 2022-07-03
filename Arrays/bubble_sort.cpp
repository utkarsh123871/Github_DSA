#include <iostream>

using namespace std;

int main()
{
    int a[] = {5 , 4 , 3, 2 , 1 , 9 , 8 , 45 , 67 , 89 , 57 , 157 , 200};
    std::cout << "Before sorting" << std::endl;
    int n = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    // swapping 
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j <= n-2 ; j++){
            if(a[j] > a[j+1]){
                swap(a[j] , a[j+1]);
            }
        }
    }
        cout<<endl;
    
    std::cout << "After sorting" << std::endl;
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }

    return 0;
}
