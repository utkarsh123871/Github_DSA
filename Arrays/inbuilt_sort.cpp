#include <iostream>

using namespace std;

bool compare(int a , int b){
    return a<b;
}

int main()
{
    int a[] = {50, 63, 100, 278, 41};
    int n = 5 , i , j;
    
    std::cout << "Before Sorting" << std::endl;
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    sort(a , a+n , compare);
    
    std::cout << "After Sorting" << std::endl;
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
