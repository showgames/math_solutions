//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.


// 簡単なvectorの実装
// Vector.cpp
// Vectorの実装を記述したファイル

#include "Vector.h" // インタフェースを取り込む

Vector::Vector(int s)
  :elem {new double[s]}, sz{s}
{
}

double& Vector::operator[](int i)
{
  return elem[i];
}

int Vector::size()
{
  return sz;
}
