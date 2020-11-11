#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3;
	float side1, side2, side3;
	const int Precision=5;
	const long int PrecInUse=pow(10, Precision);
	cout<<"Enter the coordinate x of the first point:  ";
	cin>>x1;
	cout<<"Enter the coordinate y of the first point:  ";
	cin>>y1;
	cout<<"Enter the coordinate x of the second point: ";
	cin>>x2;
	cout<<"Enter the coordinate y of the second point: ";
	cin>>y2;
	cout<<"Enter the coordinate x of the third point:  ";
	cin>>x3;
	cout<<"Enter the coordinate y of the third point:  ";
	cin>>y3;
	side1=round(sqrt(pow(x1-x2, 2)+pow(y1-y2, 2))*PrecInUse)/PrecInUse;
	side2=round(sqrt(pow(x1-x3, 2)+pow(y1-y3, 2))*PrecInUse)/PrecInUse;
	side3=round(sqrt(pow(x2-x3, 2)+pow(y2-y3, 2))*PrecInUse)/PrecInUse;
	if(((side1+side2)<=side3)||((side1+side3)<=side2)||((side2+side3)<=side1))
		cout<<"Such triangle doesn't exist!"<<endl;
	else if((side1==side2)||(side2==side3)||(side1==side3))
	{
		if((side1==side2)&&(side2==side3)&&(side1==side3)) 
			cout<<"This triangle is equilateral!"<<endl;
		else 
			cout<<"This triangle is isosceles!"<<endl;
	}
	else 
		cout<<"This triangle is versatile!"<<endl;
	return 0;
}