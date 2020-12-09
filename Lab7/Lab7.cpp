#include <iostream>
#include <ctime>

using namespace std;

void generateGrades(int *, int, int, int);
void printGrades(int*, int);
int getIndexOfMinGrade(int*, int);
int getIndexOfMaxGrade(int*, int);
double getAverageWithoutMaxMin(int*, int, int, int);

int main()
{
    int indexOfMaxGrade, indexOfMinGrade;
	const int minPossibleGrade=1, maxPossibleGrade=12, judges=8;
	int grades[judges], arrayForResult[judges];
	double athleteResult;
	generateGrades(grades, judges, minPossibleGrade, maxPossibleGrade);
	printGrades(grades, judges);
	indexOfMaxGrade=getIndexOfMaxGrade(grades, judges);
	indexOfMinGrade=getIndexOfMinGrade(grades, judges);
	athleteResult=getAverageWithoutMaxMin(grades, judges, grades[indexOfMaxGrade], grades[indexOfMinGrade]);
	printf("The athlete received %0.1f points for the performance\n", athleteResult);
}


void generateGrades(int *grades, int number, int minGrade, int maxGrade)
{
	srand(time(NULL));
	for(int i=0;i<number;i++)
	{
		grades[i]=rand()%(maxGrade-minGrade)+minGrade;
	}
}

void printGrades(int* grades, int number)
{
	cout<<"Grades from judges: ";
	for(int i=0;i<number;i++)
	{
		cout<<grades[i]<<" ";
	}
	cout<<endl;
}

int getIndexOfMinGrade(int* grades, int number)
{
	int indexMin=0;
	for(int i=1;i<number;i++)
	{
		if(grades[indexMin]>grades[i]) indexMin=i;
	}
	return indexMin;
}

int getIndexOfMaxGrade(int* grades, int number)
{
	int indexMax=0;
	for(int i=1;i<number;i++)
	{
		if(grades[indexMax]<grades[i]) indexMax=i;
	}
	return indexMax;
}

double getAverageWithoutMaxMin(int* grades, int number, int minGrade, int maxGrade)
{
	double sum=0;
	int gradesNotMaxMin=0;
	for(int i=0;i<number;i++)
	{
		if((grades[i]!=minGrade)&&(grades[i]!=maxGrade))	
		{
			sum+=grades[i];
			gradesNotMaxMin++;
		}
	}
	double average=sum/gradesNotMaxMin;
	return average;
}