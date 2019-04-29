//
//  Building.cpp
//  OSU Information System
//
//  Created by Richard Joseph on 4/23/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#include "Building.hpp"

Building::Building(std::string userName, std::string userAddress, int userSF)
{
    bName = userName;
    bAddress = userAddress;
    squareFeet = userSF;
}

std::string Building::getBName()
{
    return bName;
}

std::string Building::getBAddress()
{
    return bAddress;
}

int Building::getSquareFeet()
{
    return squareFeet;
}


