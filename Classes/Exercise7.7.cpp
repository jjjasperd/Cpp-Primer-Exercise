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
    return 0;
}
