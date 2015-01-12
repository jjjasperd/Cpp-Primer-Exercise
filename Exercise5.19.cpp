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
    string str1,str2,str3;
    do{
        cout<< "please input 2 strings:" << endl;
        cin >> str1 >>str2;
        if(str1 < str2)
            cout << "str1 is less than str2." <<endl;
        else if(str2 < str1)
            cout << "str2 is less than str1." <<endl;
        else
            cout << "str1 is equal to str2." << endl;
        cout << "more ? please input yes to continue:"<< endl;
        cin >> str3;
    }while(!str3.empty()&& str3=="yes");
    return 0;
}
