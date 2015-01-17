//
//  Sales_Data.h
//  Classes
//
//  Created by DuanYujia on 1/16/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

using namespace std;
class Sales_Data{
    friend Sales_Data add(const Sales_Data &, const Sales_Data &);
    friend istream &read(istream &, Sales_Data &);
    friend ostream &print(ostream &, const Sales_Data &);
    
public:
    Sales_Data() = default;
    Sales_Data(const string &s):bookNo(s){}
    Sales_Data(const string&s,unsigned n, double p):
    bookNo(s),units_sold(n),revenue(p*n){}
    Sales_Data(istream &);
    
    string isbn() const { return bookNo; }
    Sales_Data& combine(const Sales_Data&);

    
    
private:
    inline double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
/*
Sales_Data add(const Sales_Data &, const Sales_Data &);
istream &read(istream &, Sales_Data &);
ostream &print(ostream &, Sales_Data &);
*/
Sales_Data& Sales_Data::combine(const Sales_Data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream &read(istream &is, Sales_Data &item){
    double price = 0;
    is >> item.bookNo >>item.units_sold >>price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_Data &item){
    os << item.isbn() <<" " << item.units_sold << " "
    << item.revenue << item.avg_price();
    return os;
}

Sales_Data add(const Sales_Data &lhs, const Sales_Data &rhs){
    Sales_Data sum = lhs;
    sum.combine(rhs);
    return sum;
}

Sales_Data::Sales_Data(istream &is){
    read(is, *this);
}

inline
double Sales_Data::avg_price() const{
    return units_sold ? revenue/units_sold :0;}

#endif