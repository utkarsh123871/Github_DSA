#include <iostream>

using namespace std;

int main()
{
    // pair<int , int> p(500 , 200);   // initialization 
    // p.first = 100;
    // p.second = 200;
    // std::cout << "First: " << p.first << std::endl;
    // std::cout << "Second: " << p.second << std::endl;

    // pair<string , int> p1;
    // p1.first = "BMW";
    // p1.second = 20000;
    // std::cout << p1.first << std::endl;
    // std::cout << p1.second << std::endl;
    
    // pair<string , int> p;
    // p = make_pair("BMW" , 12);
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;
    
    pair<string , pair<float , int> >p;
    p.first = "BMW";
    p.second.first = 33.21;
    p.second.second = 20000;
    
    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;
    return 0;
}
