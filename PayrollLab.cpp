
#include <iostream>

double workerhours;
int workerchild;

double gross;

bool InvalidInput = true;

double workermath;

int main()
{
    std::cout << "Hello! Welcome to the Payroll Program!\n";
    std::cout << "Please enter positive numerical numbers for the following prompts...\n";
    
    while (InvalidInput) {
        std::cout << "\nHow many hours have you worked this week: ";
        std::cin >> workerhours;
        if (std::cin.fail()) {
            std::cout << "\nYou have failed to input a valid character. Please input a positive number...";
        }
        else if (workerhours <= 0) {
            std::cout << "\nYou have failed to input a positive number...";
        }
        else {
            //correct input
            InvalidInput = false;
        }

    }
    InvalidInput = true;
    while (InvalidInput) {
        std::cout << "\nHow many children do you have: ";
        std::cin >> workerchild;
        if (std::cin.fail()) {
            std::cout << "\nYou have failed to input a valid character. Please input a positive number...";
        }
        else if (workerchild < 0) {
            std::cout << "\nYou have failed to input a positive number, you do not have negative children...";
        }
        else {
            //correct input
            InvalidInput = false;
        }

    }

    if (workerhours > 40) {
        gross = (40 * 16.78);
        workermath = (workerhours - 40);
        gross = (gross + (workerhours * (16.78 * 1.5)))

    
    }
    else {
        gross = (workerhours * 16.78);
    
    }
    

    std::cout << "\n\nPayroll Stub:" << std::endl;

    std::cout << "\nHours Worked: ";
//    std::cout.precision(2);
//    std::cout.width(7);
    std::cout << workerhours << std::endl;
    std::cout << "Rate of Pay: ";
//    std::cout.width(7);
    std::cout << "16.78 $/hr" << std::endl;
//    std::cout.width(7);
    std::cout << "Gross: ";
    std::cout << gross << std::endl;

    std::cout << "SocSec: ";


}
