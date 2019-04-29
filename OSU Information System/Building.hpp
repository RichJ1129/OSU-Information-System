#ifndef Building_hpp
#define Building_hpp

#include <iostream>
#include <string>

class Building
{
private:
    std::string bName;
    std::string bAddress;
    int squareFeet;
    
public:
    Building(std::string, std::string, int);
    std::string getBName();
    std::string getBAddress();
    int getSquareFeet();
};

#endif /* Building_hpp */
