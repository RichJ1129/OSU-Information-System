//
//  Instructor.hpp
//  OSU Information System
//
//  Created by Richard Joseph on 4/23/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#ifndef Instructor_hpp
#define Instructor_hpp

#include <iostream>
#include "Person.hpp"

class Instructor : public Person
{
public:
    Instructor(std::string, int, double);
    void doWork();
    void personName();
    void personAge();
    void personScore();
};



#endif /* Instructor_hpp */
