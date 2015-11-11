#include <Rcpp.h>
using namespace Rcpp;

// 与えられたベクトルの合計値を求める

// [[Rcpp::export]]
double
sum_vector(const NumericVector& x)
{
  double sum = 0;
  for(int i = 0; i < x.length(); ++i)
    sum += x[i];

  return sum;
}
