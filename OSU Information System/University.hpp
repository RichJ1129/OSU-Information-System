//
//  University.hpp
//  OSU Information System
//
//  Created by Richard Joseph on 4/23/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#ifndef University_hpp
#define University_hpp

#include <iostream>
#include "Student.hpp"
#include "Instructor.hpp"
#include "Building.hpp"
#include <vector>

class University
{
private:
    std::string uniName = "Oregon State University";
    std::vector<Building> buildings;
    std::vector<Person*> people;
    
public:
    void printBuildings();
    void printPeople();
    std::vector<Person*> getPeopleVector();
    void addPerson(Person*);
    void addBuilding(Building);
};

#endif /* University_hpp */
