//
//  Header.h
//  Classes
//
//  Created by DuanYujia on 1/16/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#ifndef Classes_Header_h
#define Classes_Header_h
#include <string>
#include <iostream>

struct Person{
    std::string get_name() const { return name; }
    std::string get_address() const { return address;}
    std::string name;
    std::string address;
};

istream &read(istream &is, Person &per){
    is >> name >> address;
    return is;
}

ostream &print(ostream &os, const Person &per){
    os << per.get_name() <<" "<<per.get_address;
    return os;
}
#endif
