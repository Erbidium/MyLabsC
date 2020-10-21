#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");	
	double katet1, katet2;
	double hypotenuse, innerRadius;
	cout<<"Введите катет: ";		
	cin>>katet1;
	if(katet1<=0) cout<<"Треугольник с таким катетом не существует";
	else{
		cout<<"Введите гипотенузу: ";			
		cin>>hypotenuse;
		if((hypotenuse<=0)||(hypotenuse<katet1))  cout<<"Такой прямоугольный треугольник не существует";
		else{
			katet2=sqrt(pow(hypotenuse, 2)-pow(katet1, 2));
			innerRadius =(katet1+katet2-hypotenuse)/2;
			cout<<"Радиус окружности, вписанной в этот треугольник: ";
			printf("%0.3f\n", innerRadius);
			system("pause");
			}
		}
	return 0;
}