//Quick Sort
#include <iostream>
#include <algorithm>

using namespace std;

int partition(int *a , int s , int e){
    int i = s-1;
    
    for (int j = s; j < e; j++) {
        if(a[j] <= a[e]){
            i++;
            swap(a[i] , a[j]);
        }
    }
    swap(a[i+1] , a[e]);
    return i+1;
}

void quicksort(int *a , int s , int e){
    // base case
    if(s>=e){
        return;
    }
    // recursive case
    int index = partition(a,s,e);
    quicksort(a,s,index-1);
    quicksort(a,index+1,e);
}

int main()
{
    int a[] = {2,3,1,4,11,7,8,10,6};
    int n = sizeof(a)/sizeof(int);
    
    quicksort(a , 0 , n-1);
    for (int i = 0; i < n; i++) {
        cout << a[i] <<" ";
    }
    cout << endl;
    
    return 0;
}
