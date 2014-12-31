//
//  main.cpp
//  Array
//
//  Created by DuanYujia on 12/30/14.
//  Copyright (c) 2014 DuanYujia. All rights reserved.
//

#include <iostream>
#include <cstddef>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;
using std::vector;
using std::iterator;

int main(int argc, const char * argv[]) {
    // insert code here...
    constexpr size_t sz = 5;
    int arr[sz]={1,2,3,4,5};
    cout << "before change:" <<endl<< arr[3]<< endl;
    int *p = &arr[3];
    *p = 2;
    cout << "after change:" << endl <<arr[3]<< endl;
    
    
    return 0;
    
    
}
