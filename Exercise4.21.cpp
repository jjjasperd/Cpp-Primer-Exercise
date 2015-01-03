//
//  main.cpp
//  Fundamentals
//
//  Created by DuanYujia on 1/1/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
#include <vector>
#include <iterator>
using std::cout;
using std::cin;
using std::endl;
using std::iterator;
using std::vector;

int main(int argc, const char * argv[]) {

    vector<int> i;
    int j;
    cout << "please input some integer:"<< endl;
    //get input
    while ( cin >> j) {
        i.push_back(j);
    }
    cout << "After doubling the odd integer: "<< endl;
    //use range for loop to check and change the value in i
    for( auto &check : i){
        cout << (check = (check%2 ==0) ? check*2 : check) << " "; //use conditional operator to do the job
    }
    
    return 0;
}
