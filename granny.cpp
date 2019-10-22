// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Paul Madut
// Created on: October 2019
// This lets the user input if they are rich or good looking

#include <iostream>
#include <string>

int main() {
    // variable declaration
    std::string rich;
    std::string looks;

    // input
    std::cout << "Are you rich (yes/no): ";
    std::cin >> rich;
    std::cout << "Are you good looking (yes/no): ";
    std::cin >> looks;

    // process & output
    try {
        if (rich == "yes" && looks == "yes") {
            std::cout << "" << std::endl;
            std::cout << "You passed the granny test" << std::endl;
        } else if (rich == "yes" && looks == "no") {
            std::cout << "" << std::endl;
            std::cout << "You passed the granny test" << std::endl;
        } else if (rich == "no" && looks == "yes") {
            std::cout << "" << std::endl;
            std::cout << "You passed the granny test" << std::endl;
        } else if (rich == "no" && looks == "no") {
            std::cout << "" << std::endl;
            std::cout << "You failed the granny test" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "";
        std::cout << "Invalid Input";
    }
}
