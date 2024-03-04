#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main (int argc, char* argv[])
{
	double x = 3.14;
	double y = 12.56;
	double z = 7;
	double k = 2;
	double m = 4;

	double w1 = (pow((x / (y * z)), (1. / 3)) * log((pow(x, 2.)+pow(y, 2.))));
	double w2 = (sin(k * (x / 2.)) * cos(m * y) + y * exp(2*x-1));
	double w3 = ((fabs(x / ((2 * pow(y, 2.)) + 1))) + (pow((y / ((pow(z, 2.))) + 3), (1. / 2)))+(5 * (pow((y + z), 3.))));
	double w4 = (((x / (y * z)) * (pow((z + 1), 1. / 3))) + (pow(((pow(z, 2.)) + (pow(x, 2.)) + 1), 1./k)) - (fabs(y)));
	double w5 = ((1 / (pow((pow(x, 2.)) + (pow(y, 2.)) + (pow(k, 2.)), 1. / 2))) + ((1. / x) * sin(k * y)));

	printf("%.10lf\r\n", w1);
	printf("%.10lf\r\n", w2);
	printf("%.10lf\r\n", w3);
	printf("%.10lf\r\n", w4);
	printf("%.10lf\r\n", w5);
}
