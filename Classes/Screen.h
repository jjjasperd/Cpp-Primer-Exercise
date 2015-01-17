//
//  Screen.h
//  Classes
//
//  Created by DuanYujia on 1/16/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#ifndef Classes_Screen_h
#define Classes_Screen_h
#include<iostream>
#include<string>
#include <vector>

using namespace std;

class Screen;

class Window_mgr {
public:
    using ScreenIndex = vector<Screen>::size_type;
    inline void clear(ScreenIndex);
private:
    vector<Screen> screens;
};

class Screen{
public:
    using pos = string::size_type;
    friend void Window_mgr::clear(ScreenIndex);
    
    Screen() = default;
    Screen(pos ht, pos wd):
    height(ht),width(wd),contents(ht * wd, ' '){}
    Screen(pos ht,pos wd, char c):
    height(ht),width(wd),contents(ht * wd, c){}
    Screen &set(char);
    Screen &set(pos, pos, char);
    char get() const{
        return contents[cursor];
    }
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
    Screen &display(ostream &os){
        do_display(os);
        return *this;
    }
    const Screen &display(ostream &os) const{
        do_display(os);
        return *this;
    }
private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    string contents;
    void do_display(ostream &os) const{
        os <<contents;
    }
};

inline void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

inline
Screen &Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row +c;
    return *this;
}

char Screen::get(pos r, pos c) const{
    pos row =r *width;
    return contents[row +c];
}

inline
Screen &Screen::set(char c){
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch){
    contents[r * width + col] = ch;
    return *this;
}
#endif
