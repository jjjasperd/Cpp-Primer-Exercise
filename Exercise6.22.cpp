//
//  Exercise6.22.cpp
//  Function
//
//  Created by DuanYujia on 1/12/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>

using namespace std;
//using reference to 2 point in this function
void swapip(int* &p1, int* &p2){
    int *swapint = p1;  //swapint is a pointer which point to the pointer p1 references
    p1 = p2;            //let p1 has the address that p2 refences
    p2 = swapint;       //then p2 has the address that swapint points to
}

int main(int argc, const char * argv[]) {
    int a = 8;
    int b = 7;
    int *p1 = &a;
    int *p2 = &b;
    cout << *p1 << " "<< *p2 << endl;
    swapip(p1, p2);
    cout << *p1 << " "<< *p2 << endl;
    return 0;
}
