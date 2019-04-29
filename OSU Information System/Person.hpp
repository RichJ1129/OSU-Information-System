//
//  Person.hpp
//  OSU Information System
//
//  Created by Richard Joseph on 4/23/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <iostream>
#include <string>

class Person
{
protected:
    std::string pName;
    int age;
    double score;
    
public:
    Person(std::string, int, double);
    std::string getPName();
    int getAge();
    double getScore();
    virtual void doWork() = 0;
    virtual void personName() = 0;
    virtual void personAge() = 0;
    virtual void personScore() = 0;
};

#endif /* Person_hpp */
