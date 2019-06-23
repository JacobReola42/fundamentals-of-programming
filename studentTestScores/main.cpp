// Copyright 2018 Jacob Reola

#include "grades.h"

int main()
{
    int *grades = 0,     //To dynamically allocate an array
    numStudents = 0;
    float average = 0;

    // Get number of students that need to be processed
    std::cout << "How many students need to be processed? ";
    std::cin  >> numStudents;

    // Dynamically allocate an array
    grades = new int[numStudents];

    gradeKeeperValidation(grades, numStudents);
    sortGrades(grades, numStudents);
    averageGrades(grades, numStudents);
    printGrades(grades, numStudents);

    // Free dynamically allocated memory
    delete [] grades;
    grades = 0;
    return 0;

}
