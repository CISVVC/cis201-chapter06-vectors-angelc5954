#ifndef TRANSACTIONLOG_H
#define TRANSACTIONLOG_H
#include<vector>

class Transactionlog
{
    private:
        double m_dailybalance;
        const int MAX_DAY = 30; 
        double m_balance;
    public:
        Transactionlog(double, double); 
        std::vector<double> get_daily_balances();
        double get_transaction_total_for_day();
        void print_daily_balance();  
};

#endif
