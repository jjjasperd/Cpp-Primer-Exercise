//
//  Exercise6.42.cpp
//  Function
//
//  Created by DuanYujia on 1/15/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
#include <string>


using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending = "s"){
    return (ctr >1) ? word + ending : word;
}

int main(int argc, const char * argv[]) {
    string s1 = "success";
    string s2 = "failure";
    cout << make_plural(1,s1,"es")<< endl;
    cout << make_plural(1,s2)<<endl;
    cout << make_plural(2,s1,"es")<< endl; //plural of success should be successes
    cout << make_plural(2,s2)<<endl;
    return 0;
}
