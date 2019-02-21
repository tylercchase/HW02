/*
* Name: Tyler Chase
* Teacher: John Quan
* Class: CS201
* Assignment: HW02 Part 2
* Filename: collatz.cpp
* Purpose: Applies the collatz function to a user input
* Date: 2-10-18
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//Processes the userInput through the collatz function outputting each step
void collatz(int &input);

//Loops asking the user for an input until they enter a 0/positive
int getInt();

int main() {
    while (true) {
        cout << "Enter a number to have the collatz function applied to."
             << "Enter a 0 to end the program." << endl;
        int userInput = getInt();
        if (!userInput)
            break;
        collatz(userInput);
        cout << endl;
    }
    return 0;
}

void collatz(int &input) {
    //Prints out the number in the sequence
    cout << input << "   ";
    if (input != 1) {
        //Check if input is even
        if (input % 2) {
            input = 3 * input + 1;
            collatz(input);
        } else {
            //Otherwise it must be odd
            input = input / 2;
            collatz(input);
        }
    }

}

int getInt() {
    while (true) {
        int userInput;
        cin >> userInput;
        //If the input is a non-int clear input stream and ignore
        if (cin.fail()) {
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Please enter an actual number" << endl;
        } else if (userInput < 0) {
            //Check if input is negative
            cout << "Please enter a positive number" << endl;
        } else {
            return userInput;
        }
    }

}
