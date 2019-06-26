// Copyright 2018 Jacob Reola
	
	#include "functions.h"
	
	int main()
	{
	
	// Declaring Variables
	
	    double balance,
	            transactionAmount,
	            serviceCharge = 0;
	
	    std::string userInput;
	
	// gets initial balance
	
	    std::cout << "Enter the beginning balance: ";
	    std::cin  >> balance;
	    std::cout << "" << std::endl;
	
	// Infinite while loop for transactions 
	// Gets transactino type
	
	    while(1){
	        std::cout << "Enter a transaction: ";
	        std::cin  >> userInput;
	        // Processing check
	        if (userInput == "C"){
	            std::cin >> transactionAmount;
	            checkProcessing(balance, transactionAmount, serviceCharge);
	            std::cout << "Total service charge: $" << serviceCharge << std::endl;
	        }
	            // Processing deposit
	        else if (userInput == "D") {
	            std::cin >> transactionAmount;
	            depositProcessing(balance, transactionAmount);
	            std::cout << "Total service charge: $" << serviceCharge << std::endl;
	        }
	            // Ending the program
	        else if (userInput == "E"){
	            balance -= serviceCharge;               // keeps track of current balance
	            std::cout << "Processing end of month" << std::endl;
	            std::cout << "Final balance: $" << balance << std::endl;
	            break;
	        }
	        else {
	            std::cout << "Invalid input, please input C for checking or D for deposit followed by the amount. To exit, input E.  " << std::endl;
	        }
	        std::cout << "" << std::endl;
	    }
	
	
	    return 0;
	}
