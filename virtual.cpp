//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 抽象型について
// 実装の詳細からユーザを完全に隔離したもの
// その実現には、内部データ表現をインタフェースから切り離して、局所変数を捨て去る必要がある

#include <iostream>

// Containerのインタフェースを実装するのは、Containerから派生したクラス
// このように、Containerは、operator[]()とsize()関数を実装するクラスのインタフェースだけを提供する
// 純粋仮想関数を持つクラスは、抽象クラスと呼ばれる
class Container {
public:
    virtual double& operator[](int) = 0; // 純粋仮想関数(Containerから派生したクラスは、この関数を必ず実装しなければならない
    virtual int size() const = 0;        // constメンバ関数( = 0 という表記は、この関数が純粋仮想関数であることを示す
    virtual ~Container() {}              // デストラクタ
};


class Vector_container : public Container { // Vector_containerはContainerを実装
    Vector v;                               // 抽象クラスContainerが定義するインタフェースを実装するコンテナは、その内部で具象クラスVectorも利用できる
public:
    Vector_container(int s) : v(s) { }      // s個の要素のVector
    ~Vector_container() {}

    double& operator[](int i) { return v[i]; }
    int size() const { return v.size(); }
};

// Contaienrを利用する
// ここで重量なことは、use(Container&)が、Vector_containerのことは知らないというよりも
// 知る必要がない点である。
// use(Contaier&)は、あらゆる種類のContainerに利用できるものであり、Containerが定義するインタフェースのみを知っている
void
use(Container& c)
{
    const int sz = c.size();
    for(int i = 0; i != sz; ++i)
        std::cout << c[i] << '\n';
}

void
g()
{
    Vector_container vc(10); // 10個の要素
    use(vc);
}
