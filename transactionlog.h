/*
 *File: tansactionlog.h
 *Developer: Angel Castaneda
 *Email: angelc5954@student.vvc.edu
 *Description: header file for transactionlog.cpp
*/
#ifndef TRANSACTIONLOG_H
#define TRANSACTIONLOG_H
#include<vector>
#include"transaction.h"

class Transactionlog
{
    private:
        double m_dailybalance;
        const int MAX_DAY = 30; 
        double m_balance;
        const double interest = 0.005;
        std::vector<Transaction> t;
        std::vector<double> daily_balances;
    public:
        Transactionlog(double, double); 
        std::vector<double> get_daily_balances();
        double get_transaction_total_for_day(std::vector<Transaction>& );
        void print_daily_balance();  
};

#endif
