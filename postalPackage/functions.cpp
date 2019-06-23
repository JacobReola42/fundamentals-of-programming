// Copyright 2018 Jacob Reola

#include "functions.h"

/* Girth Requirement */
bool girth_requirements(int length, int width, int height)
{

    float girth    = 0;
    int largest  = length;
    bool accepted = true;

// gets the largest of the 3 dimensions

    if (largest < width)
        largest = width;

    if (largest < height)
        largest = height;

    girth = 2 * (length + width + height - largest) / 12;

    if (girth > 5)
        accepted = false;


    return accepted;
}

/* Shipping Requirements */
void requirements_to_processing()
{
// declaring local variables
    int weight = 0,
        length = 0,
        width  = 0,
        height = 0,
        transaction = 1,
        accepted = 0,
        rejected = 0;

    bool status;
    float cost;

// Two 1 dimensional arrays
    int weights[PACKAGE_WT] = {1, 2, 3, 5, 7, 10, 13, 16, 20, 25, 30, 35, 40, 45, 50};
    float prices[PACKAGE_WT]   = {1.50, 2.10, 4.00, 6.75, 9.90, 14.95, 19.40, 24.20, 27.30, 31.90, 38.50, 43.50, 44.80, 47.40, 55.20};

// begins loop, user can exit loop by inputting -1 for pounds
    while(true){
        cout << "Enter package weight and 3 dimensions: " ;
        cin  >> weight;

// ends the for loop
        if (weight == -1)
            break;
        cin  >> length >> width >> height;

// checks variables for errors
        if(weight <= 0 || length <= 0 || width <= 0 || height <= 0 ){
            cout << "Error - package weight and dimensions must be larger than 0" << endl;
            cout << "Please re-enter transaction" << endl;
            continue;       // jumps to the next loop
        }
        cout << "Transaction:" << setw(10)  << right  << transaction << endl;

// checks to make sure the weight in pounds and dimensions are with acceptable range in inches.
        if (weight > 50 || length > 36 || width > 36 || height > 36 || !girth_requirements(length, width, height))
        {
            rejected ++;    // counter for total of rejected packages
            cout << "Status     :  Rejected" << endl;
            status = false;
        }
        else{
            accepted ++;    // counter for total of accepted packages
            cout << "Status     :  Accepted" << endl;
            status = true;
        }
        cout << "Weight     :"<< setw(10)<< right  << weight << endl;

// this looks for the shipping costs if the status is acceptable.
        if(status){
            for(int i = 0; i < PACKAGE_WT; i ++){
                if(weight <= weights[i]){
                    cost = prices[i];
                    break;
                }
            }
            cout << "Cost       :" << setw(10)  << right  << setprecision(2) << fixed  << cost << endl;
        }else{
            cout << "Cost       :         -" << endl;

        }
        transaction++;   // counter which increments every package input
    }

    cout << "Number of accepted packages: " << accepted << endl;
    cout << "Number of rejected packages: " << rejected << endl;
}

