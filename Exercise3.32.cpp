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
    constexpr unsigned i= 10;
    int ia[i],ib[i];
    //using array
    cout << "using array:"<<endl;
    cout<< "First array: "<<endl;
    for (int ix=0; ix < i;++ix ){
        ia[ix] = ix;
        cout << ix <<" " ;
    }
    cout <<endl;
    cout <<"second array:" << endl;
    for (auto n : ia){
        ib[n] = ia[n];
        cout << n <<" " ;
    }
    cout<< endl;
    //vector
    
    cout<< "Using Vector:" << endl;
    cout<< "First Vector:" << endl;
    vector<int> a(10);
    for (auto x = a.begin(); x != a.end(); ++x) {
        *x = x -a.begin();
        cout<< *x <<" ";
    }
    cout<<endl;
    vector<int> b(10) ;
    b=a;
    cout<< "Second Vector:"<< endl;
    for (auto &y : b) {
        cout << y<<" ";
    }
    cout << endl;
    
    return 0;
    
    
}
