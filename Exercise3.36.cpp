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


//define a function so that we do not need to rewrite it several times more
void compare( int *a, int *b , int *c, int *d){
    if (a - b != c - d) {
        cout<< "They are different arraies because their size is not the same." << endl;
    }
    else{
        while (a != b) {
            if (*a != *c) {
                cout << " They are different arraies because some elements is not the same." <<endl;
                break;
            }
            else{
                if (a == b -1) {
                    cout << "They are equal."<< endl;
                }
            }
            ++a;
            ++c;
        }
    }
    cout << endl;
}
int main(int argc, const char * argv[]) {
    constexpr size_t sz = 5;
    constexpr size_t sx = 6;
    int arr1[sz]={1,2,3,4,5};
    int arr2[sz]={1,2,3,4,5};
    int arr3[sx]={1,2,3,4,5,6};
    int arr4[sz]={2,3,4,5,6};
    int *beg1 = begin(arr1);
    int *last1 = end(arr1);
    int *beg2 = begin(arr2);
    int *last2 = end(arr2);
    int *beg3 = begin(arr3);
    int *last3 = end(arr3);
    int *beg4 = begin(arr4);
    int *last4 = end(arr4);
    cout << " For the Array:" << endl;
    cout << "Compare arr1 and arr2 :" << endl;
    compare(beg1, last1, beg2, last2);
    cout << "compare arr1 and arr3 :" << endl;
    compare(beg1, last1, beg3, last3);
    cout << "compare arr1 and arr4 :" << endl;
    compare(beg1, last1, beg4, last4);
    
    cout << "for the Vector:" << endl;
    vector<int> v1 ={1,2,3,4,5};
    vector<int> v2 ={1,2,3,4,5};
    if (v1==v2) {
        cout<< " equal vectors."<<endl;
    }
    else
        cout <<" Not equal"<<endl;

    
    return 0;
    
    
}
