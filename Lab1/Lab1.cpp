#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
	double catet1, catet2;										//оголошення катетів
	double innerRadius, hypotenuse;								//оголошення гіпотенузи та внутрішнього радіусу
	cout<<"Введите катет: ";									
	cin>>catet1;												//введення першого катета
	cout<<"Введите гипотенузу: ";								
	cin>>hypotenuse;											//введення гіпотенузи
	catet2=sqrt(pow(hypotenuse, 2)-pow(catet1, 2));	//обчислення другого катета
	innerRadius =(catet1+catet2-hypotenuse)/2;					//обчислення внутрішнього радіусу трикутника
	cout<<"Внутренний радиус равен ";
	printf("%0.3f\n", innerRadius);						//виведення радіусу з точністю 3 знаки після крапки
	system("pause");
	return 0;
}