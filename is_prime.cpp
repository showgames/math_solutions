//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 素数判定プログラム
// 試し割り法

#include "std_lib_facilities.h"

bool is_prime(int n);


int
main()
{
    for(int i = 0; i <= 100; ++i) {
        if (is_prime(i)) cout << i << "\n";
    }
}


bool
is_prime(int n)
{
    if (n < 2) return false;
    for(int i = 2; i < n; ++i) {
        if(n % i == 0) return false;
    }

    return true;
}
