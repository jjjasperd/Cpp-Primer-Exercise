//
//  main.cpp
//  Statement
//
//  Created by DuanYujia on 1/9/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
#include <stdexcept>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[]) {
    int i,j;
    double result;
    while(cin >> i >> j){
        try {
            if (j == 0) {
                throw std::runtime_error("second number cannot be 0");
            }
            cout<<"Please input 2 number: "<< endl;
            result = i/j;
            cout << result << endl;
        } catch (std::runtime_error err) {
            cout << err.what()
                 <<"\n Please input y or n to decide try again or not." << endl;
            char c;
            cin >> c;
            if(!cin || c != 'y')
                break;
                
        }
    }

    return 0;
}
