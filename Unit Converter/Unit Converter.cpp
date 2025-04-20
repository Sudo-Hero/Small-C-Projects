// Unit Converter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h> 

int main()
{
    int64_t selected = 0, unit = -1;
    double value = 0;
    while (true) {
        std::cout << "Welcome to Unit Converter\n\n";
        std::cout << "1.Temperature (Celsius <-> Fahrenheit)" << std::endl;
        std::cout << "2.Distance (KM <-> Miles)" << std::endl;
        std::cout << "3.Weight (KG <-> Pounds)" << std::endl;
        std::cout << "4.Time (Hours <-> Minutes)" << std::endl << std::endl;
        std::cout << "Enter -1 to exit" << std::endl << std::endl;

        std::cout << "Please select any one option: ";
        std::cin >> selected;

        if (selected == -1) {
            break;
        }

        switch (selected) {
            case 1:
                while (true) {
                    std::cout << std::endl << std::endl;
                    std::cout << "1.Celsius" << std::endl;
                    std::cout << "2.Fahrenheit" << std::endl;

                    std::cout << "Please select any one option: ";
                    std::cin >> unit;
                    if (unit == 1) {
                        std::cout << "Enter Temprature: ";
                        std::cin >> value;
                        std::cout << "Celsius to Fahrenheit: " << (value * (9 / 5)) + 32 << "C";
                        break;
                    }
                    else if (unit == 2) {
                        std::cout << "Enter Temprature: ";
                        std::cin >> value;
                        std::cout << "Fahrenheit to Celsius: " << (value - 32) * (5 / 9) << "C";
                        break;
                    }
                    else {
                        std::cout << "Please select a valid unit";
                        break;
                    }
                }
                break;
            case 2:
                while (true) {
                    std::cout << std::endl << std::endl;
                    std::cout << "1.KM" << std::endl;
                    std::cout << "2.Miles" << std::endl;

                    std::cout << "Please select any one option: ";
                    std::cin >> unit;
                    if (unit == 1) {
                        std::cout << "Enter Distance: ";
                        std::cin >> value;
                        std::cout << "KM to Miles: " << value * 0.621371 << " Miles";
                        break;
                    }
                    else if (unit == 2) {
                        std::cout << "Enter Distance: ";
                        std::cin >> value;
                        std::cout << "Miles to KM: " << value * 1.60934 << " KM";
                        break;
                    }
                    else {
                        std::cout << "Please select a valid unit";
                        break;
                    }
                }
                break;
            case 3:
                while (true) {
                    std::cout << std::endl << std::endl;
                    std::cout << "1.KG" << std::endl;
                    std::cout << "2.Pounds" << std::endl;

                    std::cout << "Please select any one option: ";
                    std::cin >> unit;
                    if (unit == 1) {
                        std::cout << "Enter Weight: ";
                        std::cin >> value;
                        std::cout << "KG to Pounds: " << value * 2.205 << " Pounds";
                        break;
                    }
                    else if (unit == 2) {
                        std::cout << "Enter Weight: ";
                        std::cin >> value;
                        std::cout << "Pounds to KG: " << value / 2.205 << " KG";
                        break;
                    }
                    else {
                        std::cout << "Please select a valid unit";
                        break;
                    }
                }
                break;
            case 4:
                while (true) {
                    std::cout << std::endl << std::endl;
                    std::cout << "1.Hours" << std::endl;
                    std::cout << "2.Minutes" << std::endl;

                    std::cout << "Please select any one option: ";
                    std::cin >> unit;
                    if (unit == 1) {
                        std::cout << "Enter Time: ";
                        std::cin >> value;
                        std::cout << "Hours to Minutes: " << value * 60 << " Minutes";
                        break;
                    }
                    else if (unit == 2) {
                        std::cout << "Enter Time: ";
                        std::cin >> value;
                        std::cout << "Minutes to Hours: " << value / 60 << " Hours";
                        break;
                    }
                    else {
                        std::cout << "Please select a valid unit";
                        break;
                    }
                }
                break;
            default:
                std::cout << "Please select a valid option";
                break;
            }
        std::cout << std::endl << "Please enter a key...";
        _getch();
        system("cls");
    }
}
