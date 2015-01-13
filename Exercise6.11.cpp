//
//  main.cpp
//  Function
//
//  Created by DuanYujia on 1/12/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
using namespace std;

void reset(int &r){
    r = 0;
}

int main(int argc, const char * argv[]) {
    int a = 2;
    cout<<" a=" << a <<endl;
    reset(a);
    cout<<" a=" << a <<endl;

    return 0;
}
