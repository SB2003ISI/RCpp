#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::export]]


NumericVector insertion_sort_rcpp(NumericVector x)
{
    int i, j, n = x.size();
    double key;
    NumericVector A = clone(x);
    for (j = 1; j < n; j++) {
        key = A[j];
        i = j - 1;
        while (i > -1 && A[i] > key) {
            A[i+1] = A[i];
            i = i - 1;
        }
        A[i+1] = key;
    }
    return A;
}
