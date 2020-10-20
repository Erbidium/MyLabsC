#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
	double catet1, catet2, innerRadius, hypotenuse;
	cout<<"Введите катет: ";
	cin>>catet1;
	cout<<"Введите гипотенузу: ";
	cin>>hypotenuse;
	catet2=sqrt(pow(hypotenuse, 2)-pow(catet1, 2));
	innerRadius =(catet1+catet2-hypotenuse)/2;
	
	cout<<"Внутренний радиус равен"<<setprecision(10)<<innerRadius;
	system("pause");
	return 0;
}