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
    vector<int> i;
    int j;
    int sumad;
    int sumfl = 0;
    //get input
    while (cin >> j) {
        i.push_back(j);
    }
    //if the number of input elements are less than 2, then we can not get the sum
    if (i.size() < 2) {
        cout << "input is not enough!"<< endl;
    }
    //otherwise we can get the sum
    else{
        //we can get the result by using command + D in MAC, Control +Z in Windows
        //For the adjacent sum
        cout <<"\n"<< "the sums of each adjacent value are:" << endl;
        //output the result
        for (decltype(i.size()) n; n<i.size(); ++n) {
            //this is used to stop adding sum before there is just 1 int left
            if(n+1 < i.size()){
                sumad = i[n] + i[n+1];
                cout << sumad << " ";
            }
        }
        cout<<endl;
    
        //For the First-Last and Second-Secont-to-Last and so on
        cout <<"\n"<< "the sums of each First-Last and Second-Secont-to-Last value are:" << endl;
        decltype(i.size()) k = 0;
        decltype(i.size()) l = i.size()-1;
        //check the number of input is odd or even. if it is odd there must be a number in the middle
        if (i.size()%2 == 1) {  //for odd
            for (decltype(i.size()) m; m<i.size(); ++m) {
                //Since the number of input is odd, there must be a time that k = l
                if( k != l){
                    sumfl = i[k] + i[l];
                    cout << sumfl << " ";
                    ++k;   //increasing k
                    --l;   //decreasing l
                }
                else{ // in the middle , out put either k or l
                   cout<< i[k] << endl;
                   break;
                }
            }
        }
        else{   //for even
            for (decltype(i.size()) m; m<i.size(); ++m) {
                if (k < l){ //k must less than l. otherwise there are numbers reused.
                    sumfl = i[k] + i[l];
                    cout << sumfl << " ";
                    ++k;
                    --l;
                }
                
            }
            cout << endl;
        }
    }
    

    return 0;
}
