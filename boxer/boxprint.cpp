/*
* Name: Tyler Chase
* Teacher: John Quan
* Class: CS201
* Assignment: HW02 Part 1
* Filename: boxprint.cpp
* Purpose: Primary function to get input and print box
* Date: 2-10-18
*/
#include <iostream>
#include "boxer.hpp"

using std::cin;
using std::cout;
using std::endl;


int main() {

    bool isNotFirstTime = false;

    while (true) {
        std::string wordInput;
        //Used for clearing input of previous run
        if (isNotFirstTime) {
            cin.ignore(999, '\n');
        }

        cout << "Enter a word to be in the center of the box."
             << " Enter 'end' to stop the program" << endl;
        //Get string for center of box
        std::getline(cin, wordInput);
        //Exit condition
        if (wordInput == "end")
            break;

        cout << "Enter a number for the box to be the length of" << endl;
        //Get the length of the box
        int boxLength = getInt();

        //Primary print function
        printBox(boxLength, wordInput);
        cout << endl;

        isNotFirstTime = true;
    }
    return 0;
}


