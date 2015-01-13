//
//  Chapter6.h
//  Function
//
//  Created by DuanYujia on 1/12/15.
//  Copyright (c) 2015 DuanYujia. All rights reserved.
//

#ifndef Function_Chapter6_h
#define Function_Chapter6_h
void fact(){
    int val;
    int ret =1;
    cout << "please input a positive interger to get its factorial:" << endl;
    cin >> val;
    if (val>=1) {
        while (val >1) {
            ret *= --val+1;//don't want to use the val--
        }
        cout << " the result is " << ret << endl;
    }
    else
        cout<< "invalid input." << endl;
    
}

int main(int argc, const char * argv[]) {
    fact();
    
    return 0;
}

void abs(){
    int val;
    cout << "please input a interger to get its absolute value:" << endl;
    cin >> val;
    if (val>=0) {
        cout << "the result is " << val << endl;
    }
    else
        cout<< "the result is " << -val << endl;
    
}

int main(int argc, const char * argv[]) {
    abs();
    
    return 0;
}


#endif
