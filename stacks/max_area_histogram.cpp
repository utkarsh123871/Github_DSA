#include <bits/stdc++.h> 

using namespace std;

vector<int> nearest_small_left(int* arr , int n){
    vector<int> left;          // NSL
    int pseudo_index = -1;
    stack <pair<int , int>> l; // height , index
    
        for (int i = 0; i <= n-1 ; i++) {
        if(l.size()==0){
            left.push_back(pseudo_index);
        }
        
        else if(l.size()>0 && l.top().first<arr[i]){
            left.push_back(l.top().second);
        }
        
        else if(l.size()>0 && l.top().first>=arr[i]){
            while(l.size()>0 && l.top().first>=arr[i]){
                l.pop();
            }
            if(l.size() == 0){
                left.push_back(-1);
            }
            else{
                left.push_back(l.top().second);
            }
        }
        l.push({arr[i] , i});
    }
    return left;
}

vector<int> nearest_small_right(int* arr , int n){
    vector<int> right;          // NSL
    int pseudo_index = 7;
    stack <pair<int , int>> r; // height , index
    
        for (int i = n-1 ; i >= 0 ; i--) {
        if(r.size()==0){
            right.push_back(pseudo_index);
        }
        else if(r.size()>0 && r.top().first<arr[i]){
            right.push_back(r.top().second);
        }
        
        else if(r.size()>0 && r.top().first>=arr[i]){
            while(r.size()>0 && r.top().first>=arr[i]){
                r.pop();
            }
            if(r.size() == 0){
                right.push_back(pseudo_index);
            }
            else{
                right.push_back(r.top().second);
            }
        }
        r.push({arr[i] , i});
    }
    reverse(right.begin(), right.end());
    return right;
}

int main() 
{ 
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<int> left = nearest_small_left(arr, n); 
        vector<int> right = nearest_small_right(arr, n); 
	    for(int i=0;i<n;i++)
        {
            right[i]=(right[i]-left[i]-1)*arr[i];
        }

        cout << "Max Area = " << *max_element(right.begin(), right.end());
	    
	return 0; 
}
