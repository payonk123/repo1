

#include <math.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	double a = 0.0, b = 0.0, c = 0.0;
	int ret = -1;
	
	printf("Program obliczenia rzeczywistych pierwiastkow rownania kwadratowego\n");
	printf("-------------------- a*x^2+b*x+c = 0 ------------------------------\n\n");
	printf("Podaj a,b,c\n");
	ret = scanf("%le%le%le", &a, &b, &c);
	if (ret != 3)
	{
		printf("Blad przy wczytaniu\n");
		printf("Wczytane: a = %e b = %e c = %e\n", a, b, c);
		
		;
	}
	
	if (a == 0.0) 
	{
		printf("To nie jest rownanie kwadratowe: a = 0.\n");
		
		;
	}
	
	double D = -1.0; 
	D = b * b - 4.0 * a * c;
	if (D < 0.0)
	{
		double r1, r2, u1, u2;
		r1 = ( ( - b) / (2 * a));
		u1 = (pow((fabs(pow(b / (2.0*a),2) - (c / a))),1. / 2));
		r2 = (( - b) / (2.0*a));
		u2 = (- (pow((fabs(pow(b / (2.0 * a),2) - (c / a))), 1. / 2)));
		printf("Pierwiastki:x1=%e+%e*i x2=%e+%e*i", r1, u1, r2 ,u2);
	}
	else {
		double p1, p2, x1, x2;
		p1 = -b / (2.0 * a);
		p2 = sqrt(D) / (2.0 * a);
		x1 = p1 + p2;
		x2 = p1 - p2;
		printf("Rownanie kwadratowe: %lf *X*X + %lf *X + %lf = 0\n\n", a, b, c);
		printf("Pierwiastki: x1 = %e x2 = %e\n", x1, x2);
		printf("---------------------------------------------------------");
	}
	return 0;
}


