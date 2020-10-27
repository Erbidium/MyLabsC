#include <iostream>
#include <cmath>

using namespace std;

int main()
{	
	double katet1, katet2, hypotenuse, innerRadius;
	cout<<"Enter a cathetus: ";		
	cin>>katet1;
	if(cin.fail()) cout<<"Your data is incorrect!";
	else if(katet1<=0) cout<<"The triangle with such cathetus doesn't exist!";
	else{
		cout<<"Enter a hypotenuse: ";			
		cin>>hypotenuse;
		if(cin.fail()) cout<<"'Your data is incorrect!'";
		else if(hypotenuse<katet1)  cout<<"Such right triangle doesn't exist!";
		else{
			katet2=sqrt(pow(hypotenuse, 2)-pow(katet1, 2));
			innerRadius =(katet1+katet2-hypotenuse)/2;
			cout<<"The radius of the circle inscribed in this triangle:";
			printf("%0.2f\n", innerRadius);
			system("pause");
			}
		}
	return 0;
}