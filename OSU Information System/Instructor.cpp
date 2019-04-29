//
//  Instructor.cpp
//  OSU Information System
//
//  Created by Richard Joseph on 4/23/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#include "Instructor.hpp"

Instructor::Instructor(std::string userName, int userAge, double userInput) : Person(userName, userAge, userInput)
{
    pName = userName;
    age = userAge;
    score = userInput;
}

void Instructor::doWork()
{
    int num = (rand() % (49)) + 2;
    
    std::cout << this->getPName() << " graded papers for " << num << " hours" << std::endl;
}

void Instructor::personName()
{
    std::cout << "Instructor: " << this->getPName() << std::endl;
}

void Instructor::personAge()
{
    std::cout << "Age: " << this -> getAge() << " years old" << std::endl;
}

void Instructor:: personScore()
{
    std::cout << "Rating: " << this -> getScore() << std::endl;
}

