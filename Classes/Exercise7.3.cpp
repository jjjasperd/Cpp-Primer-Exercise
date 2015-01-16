//
//  main.cpp
//  Classes
//
//  Created by DuanYujia on 1/15/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
#include "Sales_Data.h"
using namespace std;

int main(int argc, const char * argv[]) {
    Sales_Data total;
    if(cin >> total.bookNo >> total.units_sold >> total.revenue){
        Sales_Data trans;
        while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            }
            else{
                cout << total.bookNo <<" " << total.units_sold << " "<<total.revenue << endl;
                total = trans;
            }
            cout << total.bookNo <<" " << total.units_sold << " "<<total.revenue << endl;
        }
    }
    else{
        cerr << "no data?!" << endl;
        return -1;
    }
    return 0;
}
