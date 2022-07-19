#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v;
    stack <int> s;
    int arr[100] , n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    cout<<"Array ";
    
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    for (int i = 0 ; i < n; i++) {
        if(s.size() == 0){
            v.push_back(-1);
        }
        
        else if(s.size()>0 && s.top()>arr[i]){
            v.push_back(s.top());
        }
        
        else if(s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }
            
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
        cout<<"Output ";
        // reverse(v.begin(), v.end());
        for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
    
    return 0;
}
