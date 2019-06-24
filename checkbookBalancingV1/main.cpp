// Copyright 2018 Jacob Reola

#include <iostream>
#include <iomanip>

const double SERVICE_CHARGE = 0.35;

void startProgram() {
   std::cout << "Checkbook balancing program \n";
} 

float beginningBalance() {
   float startingBalance,
       balance;
   std::cout << "Enter the beginning balance: ";
   std::cin >> startingBalance;
   return startingBalance;
} 


void menuOption() {
   std::cout << "\nCommands:\n";
   std::cout << "C - process a check\n";
   std::cout << "D - process a deposit\n";
   std::cout << "E - end the program\n";
} 

bool processCheck (float& begBal, float& totalCharge) {
    double rollingCharge;

    std::cout << "Enter transaction amount: ";
    std::cin  >> rollingCharge;

    if (rollingCharge <= 0) {
        std::cout << "\nInvalid transaction amount.\n";
        std::cout << "Canceling transaction.";
        return 0;
    } else {   
        std::cout << "Processing check for $" << rollingCharge;

        begBal -= rollingCharge;
        totalCharge += SERVICE_CHARGE; 

        std::cout << "\nBalance: $" << begBal;
        std::cout << "\nService charge: $" << SERVICE_CHARGE << " for a check";
        std::cout << "\nTotal service charges: $" << totalCharge;
        std::cout << std::endl;
        return 1;
    }   
    return 0;
}

bool processDeposit(float& begBal, float& totalCharge) {
   float rollingCharge;

   std::cout << "Enter transaction amount: ";
   std::cin  >> rollingCharge;

   if (rollingCharge <= 0) {
      std::cout << "\nInvalid transaction amount.\n";
      std::cout << "Canceling transaction.";
      return 0;
   } 
   else {
      std::cout << "Processing check for $" << rollingCharge;

      begBal += rollingCharge;

      std::cout << "\nBalance: $" << begBal;
      std::cout << "\nTotal service charges: $" << totalCharge;
      std::cout << std::endl;
      return 1;
      }
   return 0;
}


void transactionProcess(float& begBal, float& totalCharge) {
   char userInput;

   while(userInput != 'E') {
     std::cout << "\nEnter transaction type:";
     std::cin >> userInput;
     if (userInput =='C') {
        processCheck(begBal, totalCharge);
     } 
     else if (userInput == 'D') {
        processDeposit(begBal, totalCharge);
     }
     else if (userInput == 'E') {
        break;
     } 
     else {
        std::cout << "ERROR!\n";
     }  
   }
} 


bool endProgram(float& begBal, float& totalCharge) {

    begBal = (begBal - totalCharge);
    std::cout << "Processing end of month\n";
    std::cout << "Final balance: $" << begBal;
    std::cout << std::endl;

    return 1;
}


int main() {

   float begBal,
         totalCharge;

   startProgram();
   begBal = beginningBalance();
   menuOption();
   transactionProcess(begBal, totalCharge); // total charge gets processed in this func.
   endProgram(begBal, totalCharge);

   return 0;
} 
