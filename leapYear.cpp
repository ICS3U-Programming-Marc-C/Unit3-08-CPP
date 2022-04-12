// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: April, 2022
// Leap year calculator

#include <iostream>

int main() {
    // Declaring variables

    std::string userInput;
    int userInt;
    int userInt4;
    int userInt100;
    int userInt400;

    // Ask users if they are rich and good looking
    std::cout << "Enter a year: ";
    std::cin >> userInput;

  try {
       // convert the user's guess to an float
       userInt = std::stoi(userInput);

       userInt4 = userInt % 4;
       userInt100 = userInt % 100;
       userInt400 = userInt % 400;

       if (userInt4 == 0) {
                    if (userInt100 == 0) {
                           if (userInt400 == 0) {
                                  std::cout << userInt << " is a leap year.\n";
                    }        else {
                            std::cout << userInt << " is not a leap year.\n";
                     }
                    } else {
                           std::cout << userInt << " is a leap year.\n";
              }
       } else {
                    std::cout << userInt << " is not a leap year.\n";
       }


      // check if the guess is correct
     } catch (std::invalid_argument) {
      // The user did not enter an integer.
      std::cout << "Invalid input.\n";
      std::exit(EXIT_FAILURE);
}
}
