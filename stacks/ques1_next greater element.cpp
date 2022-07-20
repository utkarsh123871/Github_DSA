#include <bits/stdc++.h> 
using namespace std; 

// Function to print Next Greater Element for each element of the array
void nextGreater(int arr[], int n) 
{ 
    stack <int> s;
    vector <int> v;
    for (int i = n-1; i >= 0 ; i--) {
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i]){
            v.push_back(s.top());
        }
        
        else if(s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                v.push_back(-1);
            }
            else{
            v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
        // Printing the element at
        // index 'i' of vector
        cout << arr[i] << " " << v[i] << endl;
    }
    
} 

// The Main Function
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        nextGreater(arr, n); 
    }
	
	return 0; 
}
