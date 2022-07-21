#include <bits/stdc++.h> 
using namespace std; 

// Function to print Next Greater Element for each element of the array
void nextGreater(int arr[], int n) 
{ 
    stack <pair<int , int>> s;
    vector <int> v;
    for (int i = 0 ; i <= n-1 ; i++) {
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top().first>arr[i]){
            v.push_back(s.top().second);
        }
        
        else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                v.push_back(-1);
            }
            else{
            v.push_back(s.top().second);
            }
        }
        s.push({arr[i] , i});
    }
        // reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
        v[i] = i - v[i];
    }
    for (int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    // return v;
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
