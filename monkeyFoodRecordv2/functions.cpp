// Copyright 2018 Jacob Reola

#include "functions.h"

/* user inputs information */

void recordDiet(float (&eatingRecord)[MONKEY][EACHDAY])
{

    for (int row = 0; row < MONKEY; row++){
        cout << endl;
        for (int col = 0; col < EACHDAY; col++){
            cout << "Enter pounds of food eaten by monkey " << (row + 1) <<  " on " << day[col] << ": ";
            cin  >> eatingRecord[row][col];

            // checks the user input for negative integers
            while( eatingRecord[row][col] <= 0){
                cout << "Enter pounds of food eaten by monkey " << (row + 1) <<  " on " << day[col] << ": ";
                cin  >> eatingRecord[row][col];
            }
        }
    }
}

/* calculates the total average of food eaten by all monkeys */

float averageEaten(float eatingRecord[MONKEY][EACHDAY])
{
    float average = 0;

    for (int row = 0; row < MONKEY ; row++){
        for(int col = 0; col < EACHDAY; col++){
            average += eatingRecord[row][col];
        }
    }

    average = average / (MONKEY * EACHDAY);

    cout << "The average food eaten per day by all monkeys " << setw(6) <<  ": " << setw(3) << fixed << setprecision(1) << average << " pounds " << endl;

    return average;

}

/* gets the least amount of food eaten by any monkey */
float minEaten(float eatingRecord[MONKEY][EACHDAY])
{
    float min = FLT_MAX;

    for(int row = 0; row < MONKEY; row++){
        for (int col = 0; col < EACHDAY; col++){
            if (min > eatingRecord[row][col]){
                min = eatingRecord[row][col];
            }
        }
    }

    cout << "The least amount of food eaten by any monkey " << setw(7) << ": " << setw(3) <<  min << " pounds " << endl;
    return min;

}
/* gets the largest amount of food eaten by any monkey */

float maxEaten (float eatingRecord[MONKEY][EACHDAY])
{
    float max = -1;

    for (int row = 0; row < MONKEY; row++){
        for (int col = 0; col < EACHDAY; col++){
            if (max < eatingRecord[row][col])
                max = eatingRecord[row][col];
        }
    }

    cout << "The largest amount of food eaten per any monkey " << setw(4) << ": " << setw(3) << max << " pounds " << endl;

    return max;
}

/* Displays chart */

void displayChart(float eatingRecord[MONKEY][EACHDAY])
{
    cout << "Pounds of Food Eaten by Monkey and Day of Week " << endl;
    cout << "Monkey ";
    for (int col = 0; col < EACHDAY; col++){
        cout << setw(6) << day[col];
    }
    cout << endl;

    for (int row = 0; row < MONKEY; row++){
        cout << setw(6) << row + 1;
        for (int col = 0; col < EACHDAY; col++){
            cout << setw(6) << eatingRecord[row][col];
        }
        cout << endl;
    }
    cout << endl;
}
