//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 素数判定プログラム
// √n以下の整数で試す方法
// O(√n)で計算量の上昇が抑えられる

// 1. 約数はかけたらNに成るペアを持つ
// 2. 少なくともペアの片方は必ず√N以下

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
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false; // nの約数が2~√nの範囲に存在しているか
    }

    return true;
}
