#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

double minimal(double, double);

int main()
{
	double a, b, U, V, W;
	cout<<"Please, enter number a: ";
	cin>>a;
	cout<<"Please, enter number b: ";
	cin>>b;
	U=minimal(a, b);
	V=minimal(a*b, a+b);
	W=minimal(U+pow(V, 2), M_PI);
	printf("\nU=%.2f\nV=%.2f\nW=%.2f", U, V, W);
}

double minimal(double num1, double num2)
{
	return (num1<num2)?num1:num2;
}