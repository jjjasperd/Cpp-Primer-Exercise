//
//  main.cpp
//  Fundamentals
//
//  Created by DuanYujia on 1/1/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[]) {
    // insert code here...
    int i ;
            cout << "Please input a integer:" << endl;
    while(cin >> i){

        if( i%2 ==0){
            cout << "the input is a even integer. try another: "<<endl;
        }
        else{
            cout << "the input is a odd integer. try another: " <<endl;
        }
    }
    std::cout << i;
    return 0;
}
