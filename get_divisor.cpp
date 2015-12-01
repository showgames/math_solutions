//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 約数を列挙するプログラム

#include "std_lib_facilities.h"


vector<int> get_divisor(int n);

int
main()
{
    vector<int> v;
    int n = 0;

    while (cin >> n) {
        v = get_divisor(n);
        for (int i = 0; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << "\n";
    }
}


vector<int>
get_divisor(int n)
{
    vector<int> v;

    for(int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            v.push_back(i);
            if (i != n / i) v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());
    return v;
}
