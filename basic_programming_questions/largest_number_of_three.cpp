#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        std::cout << a;
    }
    
    else if(b>=a && b>=c){
        cout<<b;
    }
    
    else if(c>=a && c>=b){
        cout<<c;
    }

    return 0;
}
