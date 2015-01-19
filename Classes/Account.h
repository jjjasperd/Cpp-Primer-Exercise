//
//  Account.h
//  Classes
//
//  Created by DuanYujia on 1/18/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#ifndef Classes_Account_h
#define Classes_Account_h
#include <string>

class Account {
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double newRate) { interestRate = newRate; }
    
private:
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = 3.25;
    static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();

#endif
