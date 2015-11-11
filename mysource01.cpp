#include <Rcpp.h>
using namespace Rcpp;

// Rcppで簡単な関数を定義してみる
// ベクトルを読み込んで要素の最大値を返す

// [[Rcpp::export]]
double
returnMaxCpp(const NumericVector& x)
{
  const int length = x.length(); // length of given vector x
  double temp_max = x[0];
  for(int i = 0; i < length; ++i) {
    if (x[i] > temp_max) temp_max = x[i];
}

  return (temp_max);
}
