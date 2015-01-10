//
//  main.cpp
//  Statement
//
//  Created by DuanYujia on 1/9/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;

int main(int argc, const char * argv[]) {
    vector<string> v;
    string str;
    //get input
    while ( cin >> str ) {
        v.push_back(str);
    }
    int max_dup = 1;  // to keep the max duplicate times
    int count = 1; // to keep the duplicate times of current word
    auto beg = v.begin();
    string max_str;
    while (beg != v.end()) {
        // if there exist duplication, count add 1
        if(*beg ==*(beg - 1)){
            ++count;
        }
        //else give the max_dup and max_str the current max value, and recount count
        else{
            //to check if count is bigger than max_dup
            
            if (count > max_dup) {
                max_dup = count;
                max_str = *(beg -1);
            }
            count = 1;
        }
        ++beg;
    }
    //check again out side the loop to catch the last set of replicated word, if any
    if (count > max_dup) {
        max_dup = count;
        max_str = *(beg -1);
    }
    if (count != 1) {
        cout << " the most duplicated word is " << max_str << " for " << max_dup << " times"<< endl;
    }
    else{
        cout << " there was no word been repeated"<<endl;
    }
    return 0;
}
