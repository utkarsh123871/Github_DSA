#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<string , int> ourmap; 
    
    // insert
    pair <string , int> p("abc" , 1); // key , value
    ourmap.insert(p);
    ourmap["def"] = 2;
    
    // find or access
    std::cout << ourmap["abc"] << std::endl;
    std::cout << ourmap["def"] << std::endl;
    std::cout << ourmap.at("abc") << std::endl;
    std::cout << "size"<< ourmap.size() << std::endl;
    // std::cout << ourmap.at("ghi") << std::endl;
    std::cout << ourmap["ghi"] << std::endl;
    std::cout << "size"<< ourmap.size() << std::endl;
    
    // to check whether key is present or count
    if(ourmap.count("ghi") > 0){
        cout<<"ghi present"<<endl;
    }
    
    else
        cout<<"ghi not present"<<endl;
        
    // erase an element
    std::cout << "size"<< ourmap.size() << std::endl;
    ourmap.erase("ghi");
    std::cout << "size"<< ourmap.size() << std::endl;
    if(ourmap.count("ghi") > 0){
        cout<<"ghi present"<<endl;
    }
    
    else
        cout<<"ghi not present"<<endl;
    return 0;
}
