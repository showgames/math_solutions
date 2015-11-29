//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 二次方程式を解くプログラム

#include "std_lib_facilities.h"


double get_value();
void solve_equation(double a, double b, double c);

int
main()
{
    double a, b, c;
    a = get_value();
    b = get_value();
    c = get_value();
    solve_equation(a, b, c);
}


double
get_value()
// 標準入力から値を取得
{
    double val = 0;
    cin >> val;
    return val;
}


void
solve_equation(double a, double b, double c)
// 二次方程式を解く
{
    double x1 = 0, x2 = 0;
    double d = b*b-4*a*c; // 判別式(二次方程式でいうDのこと)

    // 判別式dによる条件分岐
    if(d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
    } else if (d == 0) {
        x1 = x2 = -b / (2 * a);
    } else {
        x1 = -b / (2 * a);        // 実部
        x2 = sqrt(-d) / (2 * a);  // 虚部
    }

    cout << "(" << x1 << "," << x2 << ")" << "\n";
}
