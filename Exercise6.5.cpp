//
//  main.cpp
//  Function
//
//  Created by DuanYujia on 1/12/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
using namespace std;

void abs(){
    int val;
    cout << "please input a interger to get its absolute value:" << endl;
    cin >> val;
    if (val>=0) {
        cout << "the result is " << val << endl;
    }
    else
        cout<< "the result is " << -val << endl;

}

int main(int argc, const char * argv[]) {
    abs();
    
    return 0;
}
