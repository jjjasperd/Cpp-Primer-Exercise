//
//  Exercise6.44.cpp
//  Function
//
//  Created by DuanYujia on 1/15/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
#include <string>


using namespace std;

inline bool isShorter(const string& s1, const string &s2){
    return s1.size() < s2.size();
}

int main(int argc, const char * argv[]) {
    string s1 = "hello";
    string s2 = "c++";
    cout << isShorter(s1,s2)<<endl;
    return 0;
}
