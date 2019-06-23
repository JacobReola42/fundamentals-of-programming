// Copyright 2018 Jacob Reola

#include "functions.h"

/* Processes a check according to the parameters passed in, updates the balance and service charges in the main function */
void checkProcessing (double& balance, double transactionBalance, double& totalServiceCharges)
{
    const double SERVICE_CHARGE = 0.35,
            BELOW_ONE_GRAND = 10.00,
            BELOW_ZERO = 30.00;

    std::cout << "Processing check for " <<  transactionBalance << std::endl;
    balance -= transactionBalance;
    std::cout << "Balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
    std::cout << "Service charge $" << SERVICE_CHARGE << " for a check" <<  std::endl;
    totalServiceCharges += SERVICE_CHARGE;

    if (balance < 1000){
        totalServiceCharges += BELOW_ONE_GRAND;
        std::cout << "Service Charge: $" << BELOW_ONE_GRAND << " balance below $1000.00 " << std::endl;
    }
    if (balance < 0){
        totalServiceCharges += BELOW_ZERO;
        std::cout << "Service Charge: $" << BELOW_ZERO << " balance is below zero " << std::endl;
    }

}

/* Processes deposit and updates the balance in the main function */
void depositProcessing (double& balance, double transactionBalance)
{
    balance += transactionBalance;
    std::cout << "Processing depsit for $ " << transactionBalance << std::endl;
    std::cout << "Balance: $ " << balance << std::endl;

}

