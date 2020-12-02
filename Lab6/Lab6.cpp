#include <iostream>
#include <cmath>

using namespace std;

double min(double, double);

int main()
{
	const double M_PI=3.141592653589793238463;
	double a, b, U, V, W;
	cout<<"Please, enter number a: ";
	cin>>a;
	cout<<"Please, enter number b: ";
	cin>>b;
	U=min(a, b);
	V=min(a*b, a+b);
	W=min(U+pow(V, 2), M_PI);
	printf("\nThe results are displayed with an accuracy of three digits:\n");
	printf("U=%.2f\nV=%.2f\nW=%.2f", U, V, W);
}

double min(double num1, double num2)
{
	return (num1<num2)?num1:num2;
}