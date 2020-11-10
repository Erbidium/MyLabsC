#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
	const double x=0.56;
    double e=0.00001, yPrev, y, yZn;
    int n=1;
    yZn=sin(x);
    y=1/yZn;
	cout<<"Precision is: e="<<e<<endl;
	cout<<"x="<<x<<endl;
	printf("y(%-3d)=%0.8f\n", n, y);
    do
    {
        yPrev=y;
        n++;
        yZn+=sin(x)*(1/pow(n, 2));
        y=1/yZn;
    	printf("y(%-3d)=%0.8f\n", n, y);
    	//printf("y(%-3d)=%0.8f; y-yPrev=%0.8f\n", n, y, fabs(y-yPrev));
    }
    while(fabs(y-yPrev)>e);
	printf("\nResult:\ny=%0.8f", y);
    return 0;
}
