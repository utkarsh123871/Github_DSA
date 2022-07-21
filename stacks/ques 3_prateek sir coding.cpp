#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    stack<int> s;
    while(t--)
    {
        int query;
        cin>>query;
        
        if(query == 1){
            if(!s.empty())
            {
                cout<<s.top()<<endl;
                s.pop();
            }
            
            else{
                cout<<"No Code"<<endl;
            }
        }
        
        else if(query == 2){
            int cost;
            cin>>cost;
            s.push(cost);
        }
    }

    return 0;
}
