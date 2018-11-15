#include<iostream>
#include"transactionlog.h"
#include<string>
#include<vector>

Transactionlog::Transactionlog(double dailybalance, double balance)
{
    m_dailybalance = dailybalance;
    m_balance = balance; 
}

std::vector<double> Transactionlog::get_daily_balances()
{
    std::vector<double>daily_balances;
    double balance = 0.0;
    for(int day = 0; day < MAX_DAY; day++)
        {
            balance += get_transaction_total_for_day(day+1);
            daily_balances.push_back(balance);
        }
    return daily_balances;
}

double Transactionlog::get_transaction_total_for_day()
{
    double total = 0.0;
    std::vector<double> daily_balances;
    for(int i = 0; i < MAX_DAY; i++)
    {
        total += transactions[i+1].get_ammount();
        daily_balances.push_back(total);
    }       
}

void Transactionlog::print()
{
    for(int i = 0; i < transaction.size(); i++)
        transactions[i+1].Transaction::print();
}
