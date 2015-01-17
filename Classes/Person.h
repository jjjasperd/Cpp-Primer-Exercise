//
//  Person.h
//  Classes
//
//  Created by DuanYujia on 1/16/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#ifndef Classes_Header_h
#define Classes_Header_h
#include <string>
#include <iostream>

using namespace std;
class Person{
    friend istream &read(istream &, Person &);
    friend ostream &print(ostream &, const Person &);
public:
    Person() = default;
    Person(const std::string &s) : name(s){}
    Person(const std::string &s , const std::string &a):
    name(s),address(a){}
    person(istream &);
    string get_name() const { return name; }
    string get_address() const { return address;}
private:
    string name;
    string address;
};

istream &read(istream &is, Person &per){
    is >> name >> address;
    return is;
}

ostream &print(ostream &os, const Person &per){
    os << per.get_name() <<" "<<per.get_address;
    return os;
}

Person::Person(istream is&){
    read(is, *this);
}
#endif
