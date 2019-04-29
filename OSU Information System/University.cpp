//
//  University.cpp
//  OSU Information System
//
//  Created by Richard Joseph on 4/23/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#include "University.hpp"

void University::printBuildings()
{
    for(int i = 0; i < buildings.size(); i++)
    {
        std::cout << "Building Name: " << buildings[i].getBName() << std::endl;
        std::cout << "Building Address: " << buildings[i].getBAddress() << std::endl;
        std::cout << "Building Size: " << buildings[i]. getSquareFeet() << " square feet" << std::endl;
        std::cout << std::endl;
    }
}

void University::printPeople()
{
    for(int i = 0; i < people.size(); i++)
    {
        people[i]->personName();
        people[i]->personAge();
        people[i]->personScore();
        std::cout << std::endl;
    }
}

std::vector<Person*> University::getPeopleVector()
{
    return people;
}

void University::addPerson(Person *person)
{
    people.push_back(person);
}

void University::addBuilding(Building building)
{
    buildings.push_back(building);
}

