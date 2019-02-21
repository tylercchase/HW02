/*
* Name: Tyler Chase
* Teacher: John Quan
* Class: CS201
* Assignment: HW02 Part 1
* Filename: boxer.cpp
* Purpose: Contains functions for printing box
* Date: 2-10-18
*/

#include <string>
#include <iostream>
#include "boxer.hpp"

using std::cout;
using std::endl;
using std::cin;

void printBox(int &length, std::string &word) {
    int wordLength = int(word.length());
    filledLines(length, wordLength);
    openLine(length, wordLength);
    wordLine(length, word);
    openLine(length, wordLength);
    filledLines(length, wordLength);
}

void wordLine(int &length, std::string &word) {
    fillChar(length);
    cout << " " << word << ' ';
    fillChar(length);
    cout << endl;
}

void openLine(int &length, int &wordLength) {
    fillChar(length);
    std::string spaces(wordLength + 2, ' ');
    cout << spaces;
    fillChar(length);
    cout << endl;
}

void filledLines(int &length, int &wordLength) {
    int tempLineLength;
    //Every line is twice the size of the input length, plus the word
    //length plus two spaces(on the sides of the word)
    tempLineLength = length * 2 + wordLength + 2;
    for (int i = 0; i < length; ++i) {

        fillChar(tempLineLength);
        cout << endl;
    }
}

void fillChar(int &length) {
    std::string filler(length, fillCharacter);
    cout << filler;
}

int getInt() {
    while (true) {
        int output;
        cin >> output;
        if (cin.fail()) {
            //If input != int clear input stream and ignore previous
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Please actually enter a number" << endl;
        } else if (output <= 0) {
            cout << "Please enter a positive number, greater than 0"
                 << endl;
        } else {
            return output;
        }
    }
}