//
//  main.cpp
//  PRG-2-5-Average-of-Values
//
//  Created by Keith Smith on 10/5/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  To get the average of a series of values, you add the values up then divide the sum by
//  the number of values. Write a program that stores the following values in five different
//  variables: 28, 32, 37, 24, and 33. The program should first calculate the sum of
//  these five variables and store the result in a separate variable named sum. Then, the
//  program should divide the sum variable by 5 to get the average. Display the average
//  on the screen.


#include <iostream>

using namespace std;

int main() {
    
    // Declare constants
    const int INT_NUM_1 = 28;
    const int INT_NUM_2 = 32;
    const int INT_NUM_3 = 37;
    const int INT_NUM_4 = 24;
    const int INT_NUM_5 = 33;
    const int INT_NUMS_TOTAL = 5;
    
    // Declare variables
    int intSum;
    float fltAverage;
    
    // Calculate sum and average values
    intSum = INT_NUM_1 + INT_NUM_2 + INT_NUM_3 + INT_NUM_4 + INT_NUM_5;
    fltAverage = static_cast<float>(intSum) / static_cast<float>(INT_NUMS_TOTAL);
    
    // Output average value to the console
    cout << "Average value: " << fltAverage << endl;
    
    return 0;
}
