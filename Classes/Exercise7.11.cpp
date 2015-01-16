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
    /*
    Sales_Data total;
    if(read(cin,total)){
        Sales_Data trans;
        while(read(cin, trans)){
            if (total.isbn() == trans.isbn()) {
                total = add(total, trans);
                //total.combine(trans);
            }
            else{
                print(cout, total) << endl;
                total = trans;
            }
            print(cout, total) << endl;
        }
    }
    else{
        cerr << "no data?!" << endl;
        return -1;
    }
     */
    Sales_Data item1;
    print(cout, item1) << endl;
    
    Sales_Data item2("12345");
    print(cout, item2) << endl;
    
    Sales_Data item3("12345", 3, 2.5);
    print(cout, item3) << endl;
    
    Sales_Data item4(cin);
    print(cout, item4) << endl;
    
    return 0;
}
