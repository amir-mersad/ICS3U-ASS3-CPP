// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program checks if a rectangle is a square

#include <iostream>

int main() {
    // This function checks if a rectangle is a square
    std::string side1str;
    std::string side2str;
    int side1;
    int side2;

    // Input
    std::cout << "Please enter the length of the rectangle: " << std::endl;
    std::cin >> side1str;
    std::cout << "Please enter the width of the rectangle: " << std::endl;
    std::cin >> side2str;

    // Process & Output
    try {
        side1 = std::stoi(side1str);
        side2 = std::stoi(side2str);
        if (side1 == side2) {
            std::cout << "Your rectangle is a square!" << std::endl;
        } else {
            std::cout << "Your rectangle is not a square!" << std::endl;
        }
    } catch (std::invalid_argument) {
            std::cout << "Wrong input!!!";
    }
}
