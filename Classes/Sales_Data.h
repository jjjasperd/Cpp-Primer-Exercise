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


struct Sales_Data{
    std::string isbn() const { return bookNo; }
    Sales_Data& combine(const Sales_Data&);
    double avg_price() const;
    
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_Data& Sales_Data::combine(const Sales_Data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

#endif