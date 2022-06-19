#include <iostream>

using namespace std;

void merge(int *a , int *b , int *c , int s , int e){
    int mid = (s+e)/2;
    
    int i = s;
    int j = mid+1;
    int k = s;
    
    while(i<=mid && j<=e){
        if(b[i] <= c[j]){
            a[k++] = b[i++];
        }
        else{
            a[k++] = c[j++];
        }
    }
    
    while(i<=mid){
        a[k++] = b[i++];
    }
    
    while(j<=e){
        a[k++] = c[j++];
    }
}

void Merge_Sort(int *a , int s , int e){
    // base case
    if(s>=e){
        return;
    }
    
    // recursive case
    // 1. divide
    int b[100] , c[100];
    
    int mid = (s+e)/2;
    
    for (int i = s; i <= mid; i++) {
        b[i] = a[i];
    }
    
    for (int i = mid+1; i <= e; i++) {
        c[i] = a[i];
    }
    
    // 2. sort
    Merge_Sort(b,s,mid);
    Merge_Sort(c,mid+1,e);
    
    // 3. Merge
    merge(a,b,c,s,e);
}

void print(int *a , int n){
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {4,3,8,9,7,1,6,2,0,5};
    int n = sizeof(a)/sizeof(int);
    
    cout<<"before sorting"<<endl;
    print(a , n);
    
    Merge_Sort(a,0,n-1);
    
    cout<<"after sorting"<<endl;
    print(a , n);
    

    return 0;
}
