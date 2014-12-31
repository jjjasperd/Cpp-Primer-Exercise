//
//  main.cpp
//  Array
//
//  Created by DuanYujia on 12/30/14.
//  Copyright (c) 2014 DuanYujia. All rights reserved.
//

#include <iostream>
#include <cstddef>
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    // insert code here...
    constexpr unsigned i= 10;
    int ia[i];
    
    for (int ix=0; ix < i;++ix ){
        ia[ix] = ix;
        cout << ix <<" " ;
    }
    cout<< endl;
    return 0;
}
