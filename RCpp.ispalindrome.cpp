#include<Rcpp.h>
using namespace Rcpp;
// [[Rcpp::export]]
int ispalindrome(int n)
{
	int r,revnum=0;
	for(r=n;r>0;r/=10)
	revnum=revnum*10+(r%10);	/*Reversing the Number using For Loop*/
	if (n==revnum)
	  return 1;
	else
	  return 0;
}

