//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.


// 簡単なvectorの実装

#include <iostream>
using namespace std; // std::なしでstd内の名前を見えるようにする

class Vector {
public: // インタフェースの部分
    Vector(int s) :elem{new double[s]}, sz{s} { } // Vectorを構築
    double& operator[ ](int i) { return elem[i]; } //添字による要素のアクセス
private:
    double* elem; // 要素へのポインタ
    int sz;       // 要素数
};

int
main()
{
    Vector v(6); // 6個の要素をもつVector
}
