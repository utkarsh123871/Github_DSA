#include <iostream>

using namespace std;

int main()
{
    int a[] = {50, 63, 100, 278, 41};
    int n = 5 , i , j;
    
    std::cout << "Before Sorting" << std::endl;
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    for (int i = 1; i < n; i++) {
        int puc = a[i];
        for (j= i-1 ; j>= 0 && a[j]>puc ; j--) {
                a[j+1] = a[j];
            }
            a[j+1] = puc;
        }
    
    std::cout << "After Sorting" << std::endl;
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
