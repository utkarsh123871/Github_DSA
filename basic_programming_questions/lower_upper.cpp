#include <iostream>

using namespace std;

int main()
{
    char s;
    cin>>s;
    if(islower(s)){
        cout<<"lowercase";
    }
    
    else if(isupper(s)){
        cout<<"UPPERCASE";
    }
    
    else{
        cout<<"Invalid";
    }
    
    return 0;
}
