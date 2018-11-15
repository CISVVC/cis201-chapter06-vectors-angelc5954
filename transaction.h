#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction
{
    private:
        int day;
        double ammount;
        std::string description;
    public:
        Transaction();
        void read();
        int get_day();
        double get_ammount();
        std::string get_description;
        void print() const;
};

#endif
