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

struct Person{
    std::string get_name const { return name; }
    std::string get_address const { return address;}
    std::string name;
    std::string address;
};
#endif
