// Copyright 2018 Jacob Reola

#include <iostream>
#include <iomanip>

const double SERVICE_CHARGE = 0.35;

int main()
{

// declaring variables 

    double balance,
            amount,
            totalServiceCharge = 0;
    std::string choice;

// begins checkbook balancing program and displays menu
// gets initial balance
    std::cout << "Checkbook Balancing Program\n"; 
    std::cout << "Enter the beginning balance: \n";
    std::cin  >> balance;
    std::cout << "" << std::endl;
    std::cout << "Commands: \n";
    std::cout << "C - process a check\n";
    std::cout << "D - process a deposit\n";
    std::cout << "E - end the program\n";

// infinite while loop for transactions
// gets transaction type
    while(1){
        std::cout << "Enter transaction type: ";
        std::cin  >> choice;
        amount = 0;
        if(choice == "C"){

            // loops if input is illegal

            while (amount <= 0){
                std::cout << "Enter transaction amount: ";
                std::cin  >> amount;
            }

            // process a check

            std::cout << "Processing check for $" << std::fixed <<  std::setprecision(2) << amount << std::endl;
            balance -= amount;
            totalServiceCharge += SERVICE_CHARGE;
            std::cout << "Balance: $" << std::setprecision(2) << balance << std::endl;
            std::cout << "Service charge: $" << SERVICE_CHARGE << " for a check" << std::endl;
            std::cout << "Total service charges: $" << std::setprecision(2) << totalServiceCharge << std::endl;

        }else if (choice == "D"){

            // loops if input is illegal

            while (amount <= 0){
                std::cout << "Enter transaction amount: ";
                std::cin  >> amount;
            }

            // process deposit

            std::cout << "Processing deposit for $" << amount << std::endl;
            balance += amount;
            std::cout << "Balance: $" << balance << std::endl;
            std::cout << "Total Service charges: $" << totalServiceCharge << std::endl;

            // ending the program and displays ending balance

        }else if (choice == "E"){
            balance -= totalServiceCharge;
            std::cout << "Processing end of month\n";
            std::cout << "Final balance: $" << balance << std::endl;
            break;
        }else{
            // notify if input is illegal
            std::cout << "Not a valid command. Please choose from C, D, and E" << std::endl;
        }
        std::cout << "" << std::endl;

// ends the while loop of transaction types   
    }

    return 0;
}
