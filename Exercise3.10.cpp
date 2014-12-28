//
//  main.cpp
//  initial
//
//  Created by DuanYujia on 12/22/14.
//  Copyright (c) 2014 DuanYujia. All rights reserved.
//

#include <iostream>
#include <string>

using  std::cout;
using std::cin;
using std::string;
using std::endl;
//using string::size_type;

int main(int argc, const char * argv[]) {
    
    string s1,s2; // define 2 string to save input and get output
    //stop until EOF
    while (getline(cin, s1)) {
        
        cout << "the original string is: "<< s1 << endl;
        //check if each character in s1 is a punctuation
        for (auto &i :s1) {
            if (!ispunct(i)) //if not, save it in s2
                s2 +=i;
                }
        //output s2 as result
        cout << "After: "<< s2 << endl;
        

    }
    
    
    return 0;
    
}