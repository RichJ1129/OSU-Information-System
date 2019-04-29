//
//  Student.hpp
//  OSU Information System
//
//  Created by Richard Joseph on 4/23/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <iostream>
#include "Person.hpp"

class Student : public Person
{
    
public:
    Student(std::string, int, double);
    void doWork();
    void personName();
    void personAge();
    void personScore();
};

#endif /* Student_hpp */
