#include<stdio.h>
#include "myMath.h"


 int main() {
	
	double x;
	printf("Please‬‬ ‫‪insert‬‬ ‫‪a‬‬ ‫‪real‬‬ ‫‪number:‬‬");
	scanf("%lf",&x);

	double first = sub(add(Exp(x),Pow(x,3)),2);
	double second = add(mul(Pow(x,2),2), mul(x,3));
	double third = sub(div(mul(Pow(x,3),4),5), mul(x,2));

	printf("The‬‬ ‫‪value‬‬ ‫‪of‬‬ f(x) = e^x + x^3 - 2 ‫‪at‬‬ ‫‪the‬‬ ‫‪point‬‬ ‫‪%.4lf ‫‪is: %.4lf\n",x,first);	
	printf("The‬‬ ‫‪value‬‬ ‫‪of‬‬ f(x) = 3x + 2x^2 ‫‪at‬‬ ‫‪the‬‬ ‫‪point‬‬ ‫‪%.4lf ‫‪is: %.4lf\n",x,second);
	printf("The‬‬ ‫‪value‬‬ ‫‪of‬‬ f(x) = ( (4x^3)/5 ) - 2x ‫‪at‬‬ ‫‪the‬‬ ‫‪point‬‬ ‫‪%.4lf ‫‪is‬‬: %.4lf\n ",x,third);
}
