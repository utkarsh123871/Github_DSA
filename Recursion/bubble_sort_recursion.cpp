#include <iostream>

using namespace std;

void bubblesort(int *a , int n , int i){
    // base case
    if(i== n-1){
        return;
    }
    
    //recursive case
    for (int j = 0; j < n-1-i ; j++) {
        if(a[j] > a[j+1]){
            swap(a[j] , a[j+1]);
        }
    }
    bubblesort(a , n , i+1);
}

void print(int *a , int n){
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {5,4,3,2,1,-1,-10,0};
    int n = sizeof(a)/sizeof(int);
    
    print(a , n);
    bubblesort(a,n,0);
    print(a , n);
    

    return 0;
}
