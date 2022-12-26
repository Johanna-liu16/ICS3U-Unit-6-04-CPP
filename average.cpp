// Copyright Johanna Liu 2022
//
// Created by Johanna Liu
// Created in Dec 2022
// This program calculates the average

#include <time.h>
#include <array>
#include <iostream>
#include <random>
#include <string>

template <int rows, int cols>
double CalculateAverage(int (&passedIn2DList)[rows][cols]) {
    // This function calculates the average
    int average = 0;
    int sum = 0;
    double length = sizeof(passedIn2DList) / sizeof(passedIn2DList[0]);

    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
        for (size_t columnElement = 0; columnElement < cols; ++columnElement)
            sum += passedIn2DList[rowElement][columnElement];
    }
    average = sum / (rows * cols);

    return average;
}

int main() {
    // This function uses an array

    int aRandomNumber;
    int totalAverage;
    const int rows = 3;
    const int columns = 5;
    std::string strRows;
    std::string strColumns;
    int a2DArray [rows][columns];

    srand(time(NULL));

    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            aRandomNumber = (rand() % 10) + 1;
            a2DArray[rowElement][columnElement] = aRandomNumber;
            std::cout << aRandomNumber << ", ";
        }
        std::cout << std::endl;
    }

    // call function
    totalAverage = CalculateAverage(a2DArray);
    std::cout << "The average of all the numbers is: " << totalAverage << std::endl;

    std::cout << "\nDone." << std::endl;
}
