// oldproject_BMI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>


int main()
{

    float bmi, weight, height;
    std::cout << "Please Enter your weight in Pounds : ";
    std::cin >> weight;
    std::cout << "Please Enter your Height in Inches : ";
    std::cin >> height;
    bmi = (weight * 703) / (height * height);
    std::cout << "Your BMI is : " << bmi << "\n";

    if (bmi > 25)
        std::cout << "Overweight";
    else if (bmi < 25 && bmi>18.5)
        std::cout << "Optimal";
    else
        std::cout << "Underweight";
    return 0;
}