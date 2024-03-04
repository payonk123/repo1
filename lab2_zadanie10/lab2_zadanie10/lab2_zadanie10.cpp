#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	printf("podaj dlugosci bokow trojkata a,b,c:");
	double a, b, c;
	scanf("%lf%lf%lf", & a, &b, &c);
		if ((a+b)>=c && ((a+c)>=b) && ((c+b)>=a))
		{
			printf("Trojkat o takich bokach istnieje\n\n");
			double p, S, R;
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			R = S / p;
			printf("Pole takiego trojkata wynosi %lf, a promien okregu wpisanego w taki trojkat wynosi %lf\n\n", S, R);
		}
		else if ((a + b) <= c && ((a + c) <= b) && ((c + b) <= a)) {
			printf("Trojkat o takich bokach nie istnieje\n\n");
		}
		return 0;

}