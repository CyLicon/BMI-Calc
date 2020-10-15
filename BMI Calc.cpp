// BMI Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
int main()
{
    int cnt = 1;
    double height, weight, bmi;

    while (cnt == 1) {

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

        std::cout << "Do you wish to continue?\n";
        std::cout << "Press 0 to exit or 1 to continue: ";
        std::cin >> cnt;

        if (cnt == 0) {
            std::cout << "Thanks for using calc!\n";
            void exit();
            system("pause");
        }
    }
    while (cnt > 1 || cnt < 0) {

        std::cout << "Error: Unsupprted character/numerical. Please type correct numericals and choose from the two options given above.\n";
        std::cout << "Do you wish to continue?\n";
        std::cout << "Press 0 to exit or 1 to continue: ";
        std::cin >> cnt;

        if (cnt == 1) {
            return main();

        }
        else {
            void exit();

        }
    }
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


