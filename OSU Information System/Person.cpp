//
//  Person.cpp
//  OSU Information System
//
//  Created by Richard Joseph on 4/23/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#include "Person.hpp"

Person::Person(std::string userName, int userAge, double userInput)
{
    pName = userName;
    age = userAge;
    score = userInput;
}

std::string Person::getPName()
{
    return pName;
}

int Person::getAge()
{
    return age;
}

double Person::getScore()
{
    return score;
}
