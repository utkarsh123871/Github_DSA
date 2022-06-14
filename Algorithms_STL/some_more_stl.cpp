#include <iostream>
#include <algorithm>
using namespace std;

void printarray(int arr[] , int n){
    for (int i = 0; i < n; i++) {
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // cout<<"before rotation" <<endl;
    // printarray(arr , n);
    
    // // rotate(arr , arr+4 , arr+n);
    // reverse(arr , arr+n);
    
    // cout<<"after rotation" <<endl;
    // printarray(arr , n);
    
    int a = 10 , b = 20 , c = 30;
    // cout<<"before swapping"<<endl;
    // cout<<a << " " << b <<endl;
    
    // swap(a,b);
    
    // cout<<"after swapping"<<endl;
    // cout<<a << " " << b<<endl;
    
    cout<< min(a , min(b , c)) <<endl;
    return 0;
    
}
