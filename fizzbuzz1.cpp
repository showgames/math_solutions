//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// C++でFizzBuzz

#include "std_lib_facilities.h"

int
main()
{
    const int min = 1;
    const int max = 30;
    
    for(int i = min; i <= max; ++i){
        if(i%15 == 0) cout << "FizzBuzz" << "\n";
        else if(i%3 == 0) cout << "Fizz" << "\n";
        else if(i%5 == 0) cout << "Buzz" << "\n";
        else cout << i << "\n";
    }
}
