//
//  Exercise6.33.cpp
//  Function
//
//  Created by DuanYujia on 1/13/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
#include <vector>


using namespace std;
//using recursive to print the string v
void printv(vector<string>::iterator beg, vector<string>::iterator end){
    if(beg != end){
        cout << *beg << " ";
        printv(++beg,end);
        }
               
}

int main(int argc, const char * argv[]) {
    vector<string> v{"Hello","World"};
    vector<string>::iterator beg = v.begin();
    vector<string>::iterator end = v.end();
    printv(beg,end);
    return 0;
}
