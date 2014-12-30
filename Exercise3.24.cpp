//
//  main.cpp
//  Iterator
//
//  Created by DuanYujia on 12/29/14.
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
        for (auto n=i.begin(); n !=i.end(); ++n) {
            //this is used to stop adding sum before there is just 1 int left
            if(n+1 != i.end()){
                sumad = *n + *(n+1);
                cout << sumad << " ";
            }
        }
        cout<<endl;
        
        //For the First-Last and Second-Secont-to-Last and so on
        cout <<"\n"<< "the sums of each First-Last and Second-Secont-to-Last value are:" << endl;
        auto beg = i.begin();
        auto end = i.end()-1; //since .end() point to the next element of the last element in the vector
        
        
        //check the number of input is odd or even. if it is odd there must be a number in the middle
        if ((end-beg)%2 == 0) {  //for odd since the first start from 0
            for (auto m = i.begin(); m !=i.end(); ++m) {
                //Since the number of input is odd, there must be a time that beg = end
                if( beg < end){
                    //cout<< *beg << " " << *end <<" ";
                    sumfl = *beg + *end;
                    cout << sumfl << " ";
                    ++beg;   //increasing k
                    --end;   //decreasing l
                }
                else { // in the middle , out put either k or l
                    cout<< *beg << " "<< endl;
                    break; //in case of it keep runnning
                }
            }
        }
        else{   //for even
            for (auto m= i.begin(); m != i.end(); ++m) {
                if (beg < end){ //beg must less than end. otherwise there are numbers reused.
                    sumfl = *beg + *end;
                    cout << sumfl << " ";
                    ++beg;
                    --end;
                }
                
            }
            cout << endl;
        }
    }
    
    
    return 0;
}

