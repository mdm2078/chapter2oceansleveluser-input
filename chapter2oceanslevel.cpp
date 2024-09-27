// chapter2oceanslevel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main() {
    const double riseRate = 1.5;  //millimeter per year

    int years5 = 5;
    int years7 = 7;
    int years10 = 10;

    // Calculate the ocean level rise
    double riseIn5Years = years5 * riseRate;
    double riseIn7Years = years7 * riseRate;
    double riseIn10Years = years10 * riseRate;

    // Display the results
    cout << "The ocean's level will be " << riseIn5Years << "mm higher in 5 years." << endl;
    cout << "The ocean's level will be " << riseIn7Years << "mm higher in 7 years." << endl;
    cout << "The ocean's level will be " << riseIn10Years << "mm higher in 10 years." << endl;

    return 0;
}