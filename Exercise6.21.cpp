//
//  Exercise6.21.cpp
//  Function
//
//  Created by DuanYujia on 1/12/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>

using namespace std;

int larger(int i, int * p){
    return (i>*p)? i : *p;
}

int main(int argc, const char * argv[]) {
    int a = 8;
    int b = larger(7, &a);
    cout << b << endl;
    return 0;
}
