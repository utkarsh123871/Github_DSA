#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[1000000]; 
    
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    int q;
    cin>>q;
    
    while(q>0) { 
        int a,k;
        cin>>a>>k;
        int count =0;
        
        for(int i=0; i<n; i++) {
            if(a % arr[i] == 0) { 
                count++;
            }
        }
        
        if(count >= k) {  
            cout<<"Yes"<<endl; }
            else {
            cout<<"No"<<endl;
        }
        q--;
    }
    return 0;
}
