// Copyright (c) 2021 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on January 5 2021
// this program converts the level to grade and returns a middle percentage mark

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

int grade_conversion(std::string grade_from_user_string) {
    // converting grade to percentage
    int percentage;
    // process & output
    if (grade_from_user_string == "4+") {
        percentage = 97;
    } else if (grade_from_user_string == "4") {
        percentage = 90;
    } else if (grade_from_user_string == "4-") {
        percentage = 83;
    } else if (grade_from_user_string == "3+") {
        percentage == 78;
    } else if (grade_from_user_string == "3") {
        percentage = 75;
    } else if (grade_from_user_string == "3-") {
        percentage = 71;
    } else if (grade_from_user_string == "2+") {
        percentage = 68;
    } else if (grade_from_user_string == "2") {
        percentage = 65;
    } else if (grade_from_user_string == "2-") {
        percentage = 61;
    } else if (grade_from_user_string == "1+") {
        percentage = 58;
    } else if (grade_from_user_string == "1") {
        percentage = 55;
    } else if (grade_from_user_string == "1-") {
        percentage = 51;
    } else if (grade_from_user_string == "R") {
        percentage = 30;
    } else {
        percentage = -1;
    }
    return percentage;
}

int main() {
// this program converts the level to grade and returns a middle percentage mark
    int converted_grade;
    std::string grade_from_user_string;

    // input
        std::cout << "Enter the level you want converted to a percentage: ";
        std::cin >> grade_from_user_string;
        std::cout << "" << std::endl;

    // call functions
    converted_grade = grade_conversion(grade_from_user_string);

    if (converted_grade == -1) {
        std::cout << "Level " << grade_from_user_string <<
        " is not a valid entry" << std::endl;
    } else {
        std::cout << "Level " << grade_from_user_string <<
        " has a middle percentage of " << converted_grade << "%" << std::endl;
    }
}
