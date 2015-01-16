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
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


#endif