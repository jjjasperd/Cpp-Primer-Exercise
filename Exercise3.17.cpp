//
//  main.cpp
//  Vector
//
//  Created by DuanYujia on 12/28/14.
//  Copyright (c) 2014 DuanYujia. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::string;
int main(int argc, const char * argv[]) {
    vector<string> v;
    string l;
    while (getline(cin, l)) {
        v.push_back(l); //insert input to v
        cout << "before running:" << endl;
        //show the input
        for(auto i : v){
            cout << i << " ";
        }
        
        cout << "Afer uppercasing:" << endl;
        //get characters from v
        for(auto &j : v){
            //check each character
            for(auto &c : j)
                //if it is lowercase, change it to upper
                if (islower(c)) {
                    c = toupper(c);
                }
        }
        //output the result
        for(auto n : v){
            cout << n << " " << endl;
        }
        
        

        
    }

    return 0;
}
