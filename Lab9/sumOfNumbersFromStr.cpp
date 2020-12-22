#include <string>

using namespace std;

int getSumOfNumbersFromStr(string strWithNumbers)
{
	string currentNumber="0";
	int sum=0;
	for(int i=0;i<strWithNumbers.length();i++)
	{
		if(isdigit(strWithNumbers[i]))
		{
			currentNumber+=strWithNumbers[i];
		}
		else
		{
			sum+=stoi(currentNumber);
			currentNumber="0";
		}
		if(i==strWithNumbers.length()-1)
		{
			sum+=stoi(currentNumber);
		}
	}
	return sum;
}
