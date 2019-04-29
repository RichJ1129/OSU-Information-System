//
//  Student.cpp
//  OSU Information System
//
//  Created by Richard Joseph on 4/23/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#include "Student.hpp"

Student::Student(std::string userName, int userAge, double userInput) : Person(userName, userAge, userInput)
{
    pName = userName;
    age = userAge;
    score = userInput;
}

void Student::doWork()
{
    int num = rand() % 40 ;
    
    if(num == 0)
    {
        std::cout << this->getPName() << " did not do any hours of homework." << std::endl;
    }
    
    else if(num == 1)
    {
        std::cout << this->getPName() << " did " << num << " hour of homework." << std::endl;
    }
    
    else
    {
        std::cout << this->getPName() << " did " << num << " hours of homework." << std::endl;
    }
    
}

void Student::personName()
{
    std::cout << "Student: " << this->getPName() << std::endl;
}

void Student::personAge()
{
    std::cout << "Age: " << this -> getAge() << " years old" << std::endl;
}

void Student:: personScore()
{
    std::cout << "GPA: " << this -> getScore() << std::endl;
}
