//
//  main.cpp
//  Classes
//
//  Created by DuanYujia on 1/15/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
//#include "Sales_Data.h"
#include "Screen.h"

using namespace std;

int main(int argc, const char * argv[]) {

    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";
    
    return 0;
}
