#include <iostream>

using namespace std;

int main()
{
    int n;
    std::cin >> n;
    
    //print pattern
    // first cpmponent 
    cout<<"*";
    for (int i = 1; i <= (n-3)/2; i++) {
        cout<<" ";
    }
    for (int i = 1; i <= (n+1)/2; i++) {
        cout<<"*";
    }
    cout<<endl;
    
    //second component
    for (int rows = 1 ; rows <=(n-3)/2; rows++) {
        cout<<"*";
        //spaces
        for (int i = 1; i <= (n-3)/2; i++) {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    
    //third component
    for (int i = 1; i <=n; i++) {
        cout<<"*";
    }
    cout<<endl;
    
    // fourth component
    for (int rows = 1 ; rows <=(n-3)/2; rows++) {
        //spaces
        for (int i = 1; i <= (n-3)/2+1; i++) {
            cout<<" ";
        }
        
        //star
        cout<<"*";
        
        //spaces
        for (int i = 1; i <= (n-3)/2; i++) {
            cout<<" ";
        }
        
        //star
        cout<<"*"<<endl;
    }
    
    //fifth component
    //stars
    for (int i = 1; i <= (n+1)/2; i++) {
        cout<<"*";
    }
    
    //spaces
    for (int i = 1; i <= (n-3)/2; i++) {
            cout<<" ";
        }
    
    //stars
    cout<<"*"<<endl;
    
    return 0;
}
