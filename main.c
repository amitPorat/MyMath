#include "myMath.h"
#include <stdio.h>
int main(){
	double x;
	printf("enter a real number: \n" );
	scanf ("%lf", &x);
	printf (" f(x) = e^x + x^3 -2 ; f(%0.4f) = %0.4lf\n",x , sub(add(Exp(x),Pow(x,3)),2));
	printf (" f(x) = 3x + 2x^2 ; f(%0.4f) = %0.4lf\n" ,x,add(mul(x,3) , mul((Pow(x,2)),2)) );
	printf (" f(x) = [(4x^3)/5] - 2x ; f(%0.4f) = %0.4lf\n" ,x, sub(div(mul(Pow(x,3),4),5) , mul(x,2)) );





	return 0;
}

//f(x) = e^x + x^3 -2
//f(x) = 3x + 2x^2
                                                                        // f(x) = (4x^3)/5 - 2x
