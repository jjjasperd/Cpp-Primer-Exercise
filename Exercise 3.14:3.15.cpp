//
//  main.cpp
//  Vector
//
//  Created by DuanYujia on 12/28/14.
//  Copyright (c) 2014 DuanYujia. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::string;
int main(int argc, const char * argv[]) {
    //for exercise 3.14
    /*
    vector<int> i;
    int n;
    while (cin>>n) {
        i.push_back(n);
        }
    }
     */

    //for exercise 3.15
    vector<string> t;
    string w;
    while (cin>>w) {
        t.push_back(w);
    }

    return 0;
}
