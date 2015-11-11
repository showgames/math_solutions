#include <Rcpp.h>

using namespace Rcpp;

// [[Rcpp::export]]
int testfunction(const int x) {
    return(x*x);
}

