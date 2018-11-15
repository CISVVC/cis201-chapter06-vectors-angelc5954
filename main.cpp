/*
 *File: main.cpp
 *Developer: Angel Castaneda
 *Email: angelc5954@student.vvc.edu
 *Description: This program will print out a bank statement over the course of 30 days.
*/

#include<iostream>
#include"transaction.h"
#include"transactionlog.h"
#include<string>

int main()
{
    std::vector<Transaction> transaction;
    bool more = true;
    while(more)
    {
        Transaction t;
        t.read();
        transaction.push_back(t);
        std::cout << "Enter another? (Y?N)";
        char response;
        std::cin >> response;
        if(response != 'y' && response != 'Y')
            more = false; 
    }
    print_transaction(transaction);
    return 0;
}
