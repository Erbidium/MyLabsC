#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
	double katet1, katet2;							//Оголошення катетів
	double hypotenuse, innerRadius;					//Оголошення гіпотенузи та радіса кола, вписаного у цей прямокутний трикутник
	cout<<"Введите катет: ";						//Повідомлення про необхідність ввести значення одного з катетів прямокутного трикутника
	cin>>katet1;									//Введення першого катета
	cout<<"Введите гипотенузу: ";					//Повідомлення про необхідність ввести значення гіпотенузи		
	cin>>hypotenuse;								//Введення гіпотенузи
	katet2=sqrt(pow(hypotenuse, 2)-pow(katet1, 2));	//Обчислення другого катета
	innerRadius =(katet1+katet2-hypotenuse)/2;		//Обчислення радіуса
	cout<<"Внутренний радиус равен ";				//Виведення повідомлення про вивід радіуса
	printf("%0.3f\n", innerRadius);			//Виведення значення радіуса з точністю 3 знаки після крапки
	system("pause");
	return 0;
}