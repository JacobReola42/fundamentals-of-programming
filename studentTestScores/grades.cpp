// Copyright 2018 Jacob Reola

#include "grades.h"

void gradeKeeperValidation(int grades[], int numStudents)
{   
    for (int k = 0; k < numStudents; k++){
        
        while(1)  // loop keeps going if it's within the if statement
        {   
            std::cout << "Enter grade " << (k + 1) << ":" ;
            std::cin  >> grades[k];
            
            if (grades[k] >= 0 && grades[k] <= 104) {
                break;
                std::cout << "invalid grade, grades are between 0 and 104! ";
            }
        }
    }
}


void sortGrades (int grades[], int numStudents)
{
    for (int k = 0; k < numStudents; k++){
        for (int i = 0; i < numStudents; i++){
            // sorts grades in ascending order
            if (grades[k] > grades[i]){
                // swaps grades
                int temp = grades[k];
                grades[k] = grades[i];
                grades[i] = temp;
            }
        }
    }
}

float averageGrades(int grades[], int numStudents)
{
    float total = 0.0;

    for (int k = 0; k < numStudents; k++){
        total += grades[k]/numStudents;
    }

    return total;
}

void printGrades(int grades[], int numStudents)
{
    std::cout << std::setw(20) << "grade\n";
    std::cout << std::setw(20) << "-------\n";

    for (int k = 0; k < numStudents; k++){
        std::cout << std::setw(20) << grades[k] << std::endl;
    }

    std::cout << std::setw(20) << "_______\n";
	std::cout << std::left << std::setw(15) << "Average " << std::setprecision(4) << averageGrades(grades, numStudents) << std::endl;

}
