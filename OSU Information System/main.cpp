/*********************************************************************
 ** Program name: OSU Information System
 ** Author: Richard Joseph
 ** Date: 4/28/19
 ** Description: OSU Information System that has functions to print buildings and people
                 at the shool. Random function to make people do work.
 *********************************************************************/

#include <iostream>
#include "University.hpp"
#include "Menu.hpp"
#include <typeinfo>

int main()
{
    int user = menu();
    srand(time(0));

    University Test;
    
    Student stu("Tiger Murray", 26, 3.4);
    Student stu1("John Trite", 43, 4.0);
    Instructor instruct("Ben Volte", 33, 3.3);
    Instructor instruct1("Dave Clancy", 73, 3.7);
    
    Building b1("Burt Hall", "2651 SW ORCHARD AVE", 75332);
    Building b2("Cascade Hall", "601 SW 17TH ST", 38765);
    
    Test.addBuilding(b1);
    Test.addBuilding(b2);
    
    Test.addPerson(&stu);
    Test.addPerson(&instruct);
    Test.addPerson(&stu1);
    Test.addPerson(&instruct1);
    
    while(user != 4)
    {
        if(user == 1)
        {
            Test.printBuildings();
            user = menu();
        }
        
        else if(user == 2)
        {
            Test.printPeople();
            user = menu();
        }
        
        else if(user == 3)
        {
            std::cout << "Choose a person from the University to do work." << std::endl;
            
            for(int i = 0; i < Test.getPeopleVector().size() ;i++)
            {
                std::cout << i + 1 << ": " << Test.getPeopleVector()[i]->getPName() << std::endl;
            }
            
            int userChoice;
            
            std::cin >> userChoice;
            
            Test.getPeopleVector()[userChoice - 1]->doWork();
            
            std::cout << std::endl;
    
            user = menu();
        }
    }
    return 0;
}
