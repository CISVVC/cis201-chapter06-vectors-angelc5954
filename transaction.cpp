#include<iostream>
#include<vector>
#include"transaction.h"
#include<string>

Transaction::Transaction()
{
    day = 0;
    ammount = 0.0;
}

void Transaction::read()
{
    std::string description;
    std::cout << "Enter the day: ";
    std::cin >> day;
    std::cout << "Enter the ammount you wish to deposit or withdrawl: ";
    std::cin >> ammount;
    std::cout << "Whats is the transaction? "; 
    std::getline(std::cin, description);
}

int Transaction::get_day()
{
    return day;
}

double Transaction::get_ammount()
{
    return ammount;
}

void Transaction::print() const
{
    std::cout << "Day: " << day << std::endl;
    std::cout << "Ammount: " << ammount << std::endl;
    std::cout << "Description: " << description << std::endl;
}
