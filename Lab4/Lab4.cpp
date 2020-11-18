#include <iostream>

using namespace std;

int main()
{
    double n, x, a;
    cin>>x>>n;
	double xi = x;
	int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*(2*i-1)*(2*i);
        a=xi/fact;
        cout<<xi<<" "<<fact<<" "<<a<<endl;
        xi=xi*x;
    }
    return 0;
}
