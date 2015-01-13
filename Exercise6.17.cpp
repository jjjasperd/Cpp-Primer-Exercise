//
//  Exercise6.17.cpp
//  Function
//
//  Created by DuanYujia on 1/12/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
//using reference is easier, no matter from the programming or the storage using
bool has_uppercase(const string &str){
    for(auto c : str){
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

void switchlower(string &str){
    for(auto c : str){
        if (isupper(c)) {
            tolower(c);
        }
    }
}

int main(int argc, const char * argv[]) {
    string str = "Hello World!";
    cout << str << endl;
    cout << has_uppercase(str) << endl; // should be 1 if the string has uppercase, otherwise 0
    switchlower(str);
    cout << str << endl;
    return 0;
}
