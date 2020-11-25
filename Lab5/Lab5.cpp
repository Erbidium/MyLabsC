#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Please, enter natural number n: ";
    cin>>n;
    int fact=1;
    cout<<"A sequence of numbers that fulfill the condition of the problem:\n";
    for(int i=1;i<=n;i++){
                fact=fact*i;
                int j=1;
                while(j*(j+1)*(j+2)<=fact)
                {
                    if(fact==j*(j+1)*(j+2))
                        {cout<<i<<" ("<<i<<"!="<<j<<"*"<<j+1<<"*"<<j+2<<")\n";}
                    j++;
                }
    }
    return 0;
}
