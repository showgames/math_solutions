//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 絶対値を返すプログラム

#include "../std_lib_facilities.h"


double
abs(double n)
{
    if (n >= 0) return n;
    else return -n;
}

int
main()
{
    cout << abs(-100) << "\n";
    cout << abs(5678) << "\n";
}
