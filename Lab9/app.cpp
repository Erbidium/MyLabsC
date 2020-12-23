#include <iostream>
#include <string>
#include "sumOfNumbersFromStr.h"

using namespace std;

int main()
{
    string strWithNumbers;
	long int sum=0;
	cout<<"Please, enter a string: ";
	getline(cin, strWithNumbers);
	sum=getSumOfNumbersFromStr(strWithNumbers);
	cout<<"Sum of numbers in string: "<<sum;
}
