//
//  main.cpp
//  Iterator
//
//  Created by DuanYujia on 12/29/14.
//  Copyright (c) 2014 DuanYujia. All rights reserved.
//

#include <iostream>
//#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
//using std::string;

int main(int argc, const char * argv[]) {
    vector<int> val(10); //initialize the vector val with 10 elements, default as 0
    int in;
    cout<< "please input a number:"
    << endl;
    cin >> in; // input a number for the first element
    *val.begin() = in; // assign input to the first element
    cout << " The result:"<< endl;
    //use iterator to do the exersice
    for (auto times=val.begin(); times != val.end(); ++times) {
        *(times+1) = *(times)*2;
        cout<< *times << " ";
    }


    return 0;
}
