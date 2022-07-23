#include <bits/stdc++.h> 

using namespace std;

vector<long long> nearest_small_left(long long* arr , long long n){
    vector<long long> left;          // NSL vector
    long long pseudo_index = -1;
    stack <pair<long long , long long>> l; // height , index
    
        for (long long i = 0; i <= n-1 ; i++) {
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

vector<long long> nearest_small_right(long long* arr , long long n){
    vector<long long> right;          // NSL
    long long pseudo_index = n;
    stack <pair<long long , long long>> r; // height , index
    
        for (long long i = n-1 ; i >= 0 ; i--) {
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
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<long long> left = nearest_small_left(arr, n); 
        vector<long long> right = nearest_small_right(arr, n); 
	    for(long long i=0;i<n;i++)
        {
            right[i]=(right[i]-left[i]-1)*arr[i];
        }

        cout <<*max_element(right.begin(), right.end());
	    
	return 0; 
}
