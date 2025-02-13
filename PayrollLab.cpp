#include <iostream>
#include <iomanip>

double workerhours;
int workerchild;

double gross;

bool InvalidInput = true;

double workermath;
double ssdeduction;
double fideduction;
double sideduction;
double netpay;

int main()
{
    std::cout << "Hello! Welcome to the Payroll Program!\n";
    std::cout << "Please enter positive numerical numbers for the following prompts...\n";

    while (InvalidInput) {
        std::cout << "\nHow many hours have you worked this week: ";
        std::cin >> workerhours;
        if (std::cin.fail()) {
            std::cin.clear(); std::cin.ignore(512, '\n');
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
            std::cin.clear(); std::cin.ignore(512, '\n');
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
        gross = (gross + (workermath * (16.78 * 1.5)));


    }
    else {
        gross = (workerhours * 16.78);

    }

    std::cout << std::endl << std::endl;
    std::cout << "Payroll Stub:" << std::endl;

    std::cout << std::endl;
    std::cout << std::setw(20) << "Hours Worked: ";
    std::printf("%.2f", workerhours);
    std::cout << std::endl;


    std::cout << std::setw(20) << "Rate of Pay: ";
    std::cout << "16.78 $ / hr" << std::endl;

    std::cout << std::setw(20) << "Gross Amount: ";
    std::printf("$ %.2f", gross);
    //std::cout << "\nTest Gross: $ " << gross << std::endl;


    //deductions

    ssdeduction = (.06 * gross);
    fideduction = (.14 * gross);
    sideduction = (.05 * gross);

    std::cout << std::endl << std::endl << std::endl;
    std::cout << std::setw(20) << "Deductions: " << std::endl;
    std::cout << std::setw(20) << "SocialSecruity: ";
    std::printf("$ %.2f", ssdeduction);
    std::cout << std::endl;
    std::cout << std::setw(20) << "Federal Tax: ";
    std::printf("$ %.2f", fideduction);
    std::cout << std::endl;
    std::cout << std::setw(20) << "State Tax: ";
    std::printf("$ %.2f", sideduction);
    std::cout << std::endl;
    std::cout << std::setw(20) << "Union Fee: ";
    std::cout << "$ 10.00";

    if (workerchild > 2) {
        std::cout << std::endl;
        std::cout << std::setw(20) << "Insurance: ";
        std::cout << "$ 35.00";
        netpay = (gross - 35);
    }
    else {
        std::cout << std::endl;
        std::cout << std::setw(20) << "Insurance: ";
        std::cout << "$ 15.00";
        netpay = (gross - 15);
    }
    netpay = netpay - 10 - ssdeduction - fideduction - sideduction;

    std::cout << std::endl << std::endl;
    std::cout << std::setw(20) << "Net Pay: ";
    std::printf("$ %.2f", netpay);

    std::cout << "\n\nThank for using the Payroll Program!" << std::endl;

    return 0;


}
