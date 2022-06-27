#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,D;
    std::cin >> a>>b>>c;
    D = b*b - 4*a*c;
    if(D>0){
        int x1 = (-b+sqrt(D))/2*a;
        int x2 = (-b-sqrt(D))/2*a;
        cout<<"Real and Distinct"<<endl;
        cout<<x2<<" "<<x1;
    }
    
    else if(D==0){
        int x1 = (-b+sqrt(D))/2*a;
        cout<<"Real and Equal"<<endl;
        cout<<x1<<" "<<x1;
    }
    
    else{
        cout<<"Imaginary";
    }

    return 0;
}
