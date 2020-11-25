/*Дано натуральне число n. Перевірити усі числа від 1 до n включно на те,
 чи можна подати факторіал цього числа у вигляді добутку трьох  послідовних цілих чисел.
 Вивести числа, для яких виконується умова.*/

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
