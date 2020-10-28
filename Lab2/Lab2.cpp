#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
	const int Precision=3;
	const int PrecInUse=pow(10, Precision);
	cout<<"Enter the coordinate x of the first point"<<endl;
	cin>>x1;
	if(cin.fail()) cout<<"Your data is incorrect!"<<endl;
	else
	{
		cout<<"Enter the coordinate y of the first point"<<endl;
		cin>>y1;
		if(cin.fail()) cout<<"Your data is incorrect!"<<endl;
		else
		{
			cout<<"Enter the coordinate x of the second point"<<endl;
			cin>>x2;
			if(cin.fail()) cout<<"Your data is incorrect!"<<endl;
			else
			{
				cout<<"Enter the coordinate y of the second point"<<endl;
				cin>>y2;
				if(cin.fail()) cout<<"Your data is incorrect!"<<endl;
				else
				{
					cout<<"Enter the coordinate x of the third point"<<endl;
					cin>>x3;
					if(cin.fail()) cout<<"Your data is incorrect!"<<endl;
					else
					{
						cout<<"Enter the coordinate y of the third point"<<endl;
						cin>>y3;
						if(cin.fail()) cout<<"Your data is incorrect!"<<endl;
						else
						{
							float side1, side2, side3;
							side1=round(sqrt(pow(x1-x2, 2)+pow(y1-y2, 2))*PrecInUse)/PrecInUse;
							side2=round(sqrt(pow(x1-x3, 2)+pow(y1-y3, 2))*PrecInUse)/PrecInUse;
							side3=round(sqrt(pow(x2-x3, 2)+pow(y2-y3, 2))*PrecInUse)/PrecInUse;
							if(((side1+side2)<side3)||((side1+side3)<side2)||((side2+side3)<side1)) cout<<"Such triangle doesn't exist!"<<endl;
							else if((side1==side2)||(side2==side3)||(side1==side3))
							{
								if((side1==side2)&&(side2==side3)&&(side1==side3)) cout<<"This triangle is equilateral!"<<endl;//рівносторонній трикутник
								else {cout<<"This triangle is isosceles!"<<endl;}//рівнобедрений трикутник
							}
							else {cout<<"This triangle is versatile!"<<endl;}//різносторонній трикутник
							
						}
						
					}
				}
			}
		}
	}
}