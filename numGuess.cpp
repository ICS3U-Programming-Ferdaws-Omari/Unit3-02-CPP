// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Ferdaws
// Created on: March 2022
// This program checks if the user guesses the right number.

#include <iostream>

int main() {
    // this function checks if the number is 7
    const int GIVEN_NUMBER = 7;
    int numberGUESSED;

    // This asks the user to enter thier number
    std::cout << "Insert a number between 0-9: ";
    std::cin >> numberGUESSED;
    std::cout << "" << std::endl;

    // This compares the number guessed to the number
    // I chose and display if they got it right or wrong.
    if (numberGUESSED == GIVEN_NUMBER) {
        // output
        std::cout << "You guessed correctly!";
    }
    if (numberGUESSED != GIVEN_NUMBER) {
        // output
        std::cout << "You guessed wrong";
    }
}
