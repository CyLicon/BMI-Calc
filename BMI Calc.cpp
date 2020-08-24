// BMI Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double height, weight, bmi;

    // Ask user for their height

    std::cout << "Type in your height (m): ";
    std::cin >> height;

    // Now ask the user for their weight and calculate BMI

    std::cout << "Type in your weight (kg): ";
    std::cin >> weight;

    bmi = weight / (height * height);

    std::cout << "Your BMI is:  " << bmi << "\n";

    if (bmi < 18.5) {
        std::cout << "Come on! Eat a little!\n";
    }
    else if (bmi > 24.9) {
        std::cout << "Too lazy to excercise huh!\n";
    }
    else {
        std::cout << "You are perfectly fine!\n";
    }


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


