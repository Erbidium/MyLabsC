#include <iostream>
#include <string>
#include "sumOfNumbersFromStr.h"

using namespace std;

int main()
{
    string strWithNumbers;
	int sum=0;
	cout<<"Please, enter a string:\n";
	getline(cin, strWithNumbers);
	sum=getSumOfNumbersFromStr(strWithNumbers);
	cout<<"Sum of numbers in string: "<<sum;
}
