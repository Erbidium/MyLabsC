#include <string>

using namespace std;

long int getSumOfNumbersFromStr(string strWithNumbers)
{
	string currentNumber="0";
	long int sum=0;
	for(int i=0;i<strWithNumbers.length();i++)
	{
		if(isdigit(strWithNumbers[i]))
		{
			currentNumber+=strWithNumbers[i];
		}
		else
		{
			sum+=stol(currentNumber);
			currentNumber="0";
		}
		if(i==strWithNumbers.length()-1)
		{
			sum+=stol(currentNumber);
		}
	}
	return sum;
}
