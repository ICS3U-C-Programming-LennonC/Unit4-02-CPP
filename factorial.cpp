// Copyright (c) 2026 Lennon Cehajic All rights reserved.
// Created by: Lennon Cehajic
// Date: November 13th, 2026
// This program calculates the factorial of a whole number.

#include <iostream>
#include <string>

int main() {
    // Initialization
    int counter;
    int factorialAnswer;
    int userNumInt;
    std::string userNumStr;
    float userNumFlo;
    counter = 0;
    factorialAnswer = 1;

    // Get the user input as a string.
    std::cout << "Welcome to Lennon’s factorial calculator.\n";
    std::cout << "Please enter a whole number: ";
    std::cin >> userNumStr;

    // Try casting, then check if the input is a whole number,
    // then calculate the factorial if it is.
    try {
        userNumInt = std::stoi(userNumStr);
        userNumFlo = std::stof(userNumStr);
        if (userNumInt == userNumFlo) {
            if (userNumInt >= 0) {
                do {
                    counter = counter + 1;
                    factorialAnswer = factorialAnswer * counter;
                    std::cout << "Tracking " << counter;
                    std::cout << "times through loop.\n";
                } while (counter < userNumInt);
            } else {
                std::cout << userNumStr << " is not a positive whole number.\n";
            }
        } else {
            std::cout << userNumStr << " is not a whole number.\n";
        }
    } catch (std::invalid_argument) {
        std::cout << userNumStr << " is not an integer. Please try again.\n";
    }


// Display the factorial result
    std::cout << userNumInt << "! = " << factorialAnswer << ".\n";

    std::cout << "Thank you for playing." << std::endl;
}
