//
//  Exercise6.27.cpp
//  Function
//
//  Created by DuanYujia on 1/12/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#include <iostream>
#include <initializer_list>

using namespace std;
//using reference to 2 point in this function
int getsum(initializer_list<int> il){
    int sum = 0;
    for(auto i : il){
        sum += i;
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    cout << getsum({1,2,3,4,5}) << endl;
    return 0;
}
