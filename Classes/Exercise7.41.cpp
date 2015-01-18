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
    cout << "1. default way: " << endl;
    cout << "----------------" << endl;
    Sales_Data s1;
    
    cout << "\n2. use string as parameter: " << endl;
    cout << "----------------" << endl;
    Sales_Data s2("12345");
    
    cout << "\n3. complete parameters: " << endl;
    cout << "----------------" << endl;
    Sales_Data s3("12345", 3, 25.8);
    
    cout << "\n4. use istream as parameter: " << endl;
    cout << "----------------" << endl;
    Sales_Data s4(std::cin);
    return 0;
}