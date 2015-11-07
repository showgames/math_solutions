//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.


// 簡単なvectorの実装
// Vector.h
// モジュールのインタフェースとなる宣言を単一のファイルにまとめておく

class Vector {
public:
    Vector(int s);
    double& operator[](int i);
    int size();
private:
    double* elem; // sz個のdoubleの配列要素へのポインタ
    int sz;
};
