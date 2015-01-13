//
//  main.cpp
//  Function
//
//  Created by DuanYujia on 1/12/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int *i, int *j){
    int sp;
    sp = *i;
    *i = *j;
    *j = sp;
}

int main(int argc, const char * argv[]) {
    int a = 2;
    int b = 5;
    cout<<" a=" << a << ", b=" <<b <<endl;
    swap(&a,&b);
    cout<<" a=" << a << ", b=" <<b <<endl;
    return 0;
}
