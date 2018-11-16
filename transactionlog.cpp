/*
 *File: transactionlog.cpp
 *Developer: Angel Castaneda
 *Email: angelc5954@student.vvc.edu
 *Description: This program calculates the total daily balance and prints out the balance they have after each day.
*/
#include<iostream>
#include"transactionlog.h"
#include<string>
#include<vector>
#include"transaction.h"

Transactionlog::Transactionlog(double dailybalance, double balance) //constuctor.
{
    m_dailybalance = dailybalance;
    m_balance = balance; 
}

std::vector<double> Transactionlog::get_daily_balances() //This collects the balances from everyday.
{
    std::vector<double>daily_balances;
    double balance = 0.0;
    for(int i = 0; i < MAX_DAY; i++)
        {
            balance += get_transaction_total_for_day(i);
            daily_balances.push_back(balance);
        }
    return daily_balances;
}

double Transactionlog::get_transaction_total_for_day(std::vector<Transaction> &t)  //This function adds up the balances so far on the day.
{
    double total = 0.0;
    std::vector<double> daily_balances;
    for(int i = 0; i < MAX_DAY; i++)
    {
        total += t[i+1].get_ammount();
        daily_balances.push_back(total);
    }
    return total;       
}

void Transactionlog::print_daily_balance()  //This function will print out the added up balance.
{
    for(int i = 0; i < t.size(); i++)
        t[i+1].Transaction::print();
}
