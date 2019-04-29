#include "Menu.hpp"

//Switch case that returns 1 or 2 depending on the user input
int menu()
{
    int userInput = 0;
    
    std::cout << "1: Prints information about all the buildings." << std::endl;
    std::cout << "2: Prints information of everybody at the university." << std::endl;
    std::cout << "3: Choose a person to do work." << std::endl;
    std::cout << "4: Exit the program." << std::endl;
    
    userInput = inputValidationInt();
    
    
    switch (userInput)
    {
        case 1:
            return 1;
                
        case 2:
            return 2;
        
        case 3:
            return 3;
            
        case 4:
            return 4;
    }
    
    return 0;
}
