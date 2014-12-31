//
//  main.cpp
//  Iterator
//
//  Created by DuanYujia on 12/29/14.
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
    vector<unsigned> scores(11,0);
    unsigned grade;
    cout << "please input the score:"<< endl;
    while (cin >> grade) {
        if (grade <= 100) {
            ++(*(scores.begin()+grade/10));
        }
    }
    cout << endl << " the numbers of each degree are:" << endl;
    for(auto degree = scores.begin();degree != scores.end(); ++degree)
        cout<< *degree << " " ;
    cout<<endl;
    return 0;
}

