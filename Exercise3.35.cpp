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
using std::begin;
using std::end;

int main(int argc, const char * argv[]) {
    // insert code here...
    constexpr size_t sz = 5;
    int arr[sz]={1,2,3,4,5};
    cout << "before change:" << endl;
    int *beg = begin(arr);
    int *last = end(arr);
    while (beg != last) {
        cout << *beg << " ";
        beg++;
    }
    cout << endl;
    cout << "after change:" << endl;
    for( int*emt = begin(arr); emt != end(arr); ++emt){
        *emt = 0;
        cout << *emt << " ";
    }
    cout <<endl;
    
    return 0;
    
    
}