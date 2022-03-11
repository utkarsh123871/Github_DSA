#include<iostream>
using namespace std;

void merging(int a , int l , int mid , int r){
    int b[100];
    int i = l;
    int j = mid+1;
    int k = l;
    while(i <= mid && j<=r){
        if(a[i] < a[j]){
            b[k] = a[i];
            i++;
        }
        else{
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=r){
            b[k] = a[j];
            k++;
            j++;
        }
    }
    else{
        while(i<=mid){
            b[k] = a[i];
            k++;
            i++;
        }
    }
    for(k=l ; k<=r ; k++){
        a[k] = b[k];
    }
}

void mergeSort(int arr , int l , int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(a , l , mid);
        mergeSort(a , mid+1 , r);
        merging(a , l , mid , r);
    }
}

int main(){
    int arr[5] = {5 , 2 , 3 , 1 , 4 , 6};
    mergeSort(arr , 0 , 5);
    for(int i = 0 ; i<=n ; i++){
        cout<<arr[i];
    }
}
