﻿#include <iostream>

using namespace std;

int main()
{
	int n, fact2i=1;
    double x, a;
	cout<<"Please, enter x and n(natural number) to form a sequence"<<endl;
    cin>>x>>n;
	double xStepi = x;
	cout<<"The sequence of "<<n<<" numbers(x="<<x<<"):"<<endl;
    for(int i=1;i<=n;i++)
    {
        fact2i=fact2i*(2*i-1)*(2*i);
        a=xStepi/fact2i;
        cout<<"a("<<i<<")="<<a<<" ";
        xStepi*=x;
    }
	cout<<endl;
    return 0;
}
