//
//  main.cpp
//  Function
//
//  Created by DuanYujia on 1/12/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
using namespace std;

void fact(){
    int val;
    int ret =1;
    cout << "please input a positive interger to get its factorial:" << endl;
    cin >> val;
    if (val>=1) {
        while (val >1) {
            ret *= --val+1;//don't want to use the val--
        }
        cout << " the result is " << ret << endl;
    }
    else
        cout<< "invalid input." << endl;

}

int main(int argc, const char * argv[]) {
    fact();
    
    return 0;
}
