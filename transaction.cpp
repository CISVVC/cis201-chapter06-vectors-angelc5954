/*
 *File:transaction.cpp
 *Developer: Angel Castaneda
 *Email: angelc5954@student.vvc.edu
 *Description: Transaction class will take and print the day it is, the ammount entered, and the description of that transaction.
*/

#include<iostream>
#include<vector>
#include"transaction.h"
#include<string>

Transaction::Transaction() //default constructor
{
    day = 0;
    ammount = 0.0;
}

void Transaction::read()  //reads in the inputed day, ammount, and description
{
    std::string description;
    std::cout << "Enter the day: ";
    std::cin >> day;
    std::cout << "Enter the ammount you wish to deposit or withdrawl: ";
    std::cin >> ammount;
    std::cout << "Whats is the transaction? "; 
    std::getline(std::cin, description);
}

int Transaction::get_day() //returns the day
{
    return day;
}

double Transaction::get_ammount() //returns the ammount
{
    return ammount;
}

void Transaction::print() const //prints the day, ammount, and description for that day.
{
    std::cout << "Day: " << day << std::endl;
    std::cout << "Ammount: " << ammount << std::endl;
    std::cout << "Description: " << description << std::endl;
}
