//
//  Screen.h
//  Classes
//
//  Created by DuanYujia on 1/16/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#ifndef Classes_Screen_h
#define Classes_Screen_h
#include<string>

using namespace std;

class Screen{
public:
    using pos = string::size_type;
    Screen = default;
    Screen(pos ht,pos wd, char c):
    height(ht),width(wd),contents(ht * wd, c){}
    char get() const{
        return contents[cursor];
    }
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    string contents;
};
#endif
