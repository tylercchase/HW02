/*
* Name: Tyler Chase
* Teacher: John Quan
* Class: CS201
* Assignment: HW02 Part 1
* Filename: boxer.h
* Purpose: Contains functions for printing box
* Date: 2-10-18
*/

#ifndef BOXER_BOXER_H
#define BOXER_BOXER_H

//Character to be used to fill the box
const char fillCharacter = '*';

//Main function for printing the box that gets called by the main function
void printBox(int &length, std::string &word);

//Prints the parts of the box in between the filled segments and the word
void openLine(int &length, int &wordLength);

//Prints the line containing the word
void wordLine(int &length, std::string &word);

//Prints the solid lines that take up a majority of the box
void filledLines(int &length, int &wordLength);

//Used by the the fill functions to make things easier to read
void fillChar(int &length);

//Keeps asking for the user input, until it's a valid input
int getInt();

#endif //BOXER_BOXER_H
