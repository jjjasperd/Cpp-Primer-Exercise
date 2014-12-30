//
//  main.cpp
//  Iterator
//
//  Created by DuanYujia on 12/29/14.
//  Copyright (c) 2014 DuanYujia. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(int argc, const char * argv[]) {
    vector<string> text;
    string str;
    while (getline(cin, str)) {  //each time input a paragraph
        if (!str.empty()) {      //check if the input is empty
            text.push_back(str);
            }
        else
            break;//press Enter without input anything, then our program will jump out the loop and get the result.
    }
    cout << "The result of your input:"<< "\n";
    //We see each string as a paragraph
    for (auto it = text.cbegin();it != text.cend() && !it->empty(); ++it){
        auto upper = text.begin();
        //uppercase every characters in the first paragragh
        for(auto &c : *upper)
            c = toupper(c);
        cout <<*it << endl;
    }
    return 0;
}
