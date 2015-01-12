//
//  main.cpp
//  Statement
//
//  Created by DuanYujia on 1/9/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(int argc, const char * argv[]) {
    string str1,str2;
    while(cin >> str1 &&!str1.empty()){
        if (!isupper(str1[0])) {
            continue;
        }
        if (str1 ==str2) {
            cout << endl << "the " << str1 <<" occurs twice." << endl;
            break;
        }
        else
            str2 = str1;
        if(cin.eof())
            cout<< endl << "there is no successive  word being repeated. " << endl;
    }

    return 0;
}
