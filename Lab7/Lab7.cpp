#include <iostream>
#include <ctime>

using namespace std;

void generateGrades(int *);
void printGrades(int*);
int getIndexOfMinGrade(int*);
int getIndexOfMaxGrade(int*);
double getAverageWithoutMaxMin(int*, int, int);

const int minPossibleGrade=1, maxPossibleGrade=12, judges=8;

int main()
{
    int indexOfMaxGrade, indexOfMinGrade, numWithoutMaxMin=0;
	double athleteResult;
	int grades[judges], arrayForResult[judges];
	generateGrades(grades);
	printGrades(grades);
	indexOfMaxGrade=getIndexOfMaxGrade(grades);
	indexOfMinGrade=getIndexOfMinGrade(grades);
	athleteResult=getAverageWithoutMaxMin(grades, grades[indexOfMaxGrade], grades[indexOfMinGrade]);
	printf("The athlete received %0.1f points for the performance\n", athleteResult);
}


void generateGrades(int *grades)
{
	srand(time(NULL));
	for(int i=0;i<judges;i++)
	{
		grades[i]=rand()%(maxPossibleGrade-minPossibleGrade)+minPossibleGrade;
	}
}

void printGrades(int* grades)
{
	cout<<"Grades from judges: ";
	for(int i=0;i<judges;i++)
	{
		cout<<grades[i]<<" ";
	}
	cout<<endl;
}

int getIndexOfMinGrade(int *grades)
{
	int indexMin=0;
	for(int i=1;i<judges;i++)
	{
		if(grades[indexMin]>grades[i]) indexMin=i;
	}
	return indexMin;
}

int getIndexOfMaxGrade(int *grades)
{
	bool isMax=false;
	int indexMax=0;
	for(int i=1;i<judges;i++)
	{
		if(grades[indexMax]<grades[i]) indexMax=i;
	}
	return indexMax;
}

double getAverageWithoutMaxMin(int *grades, int minGrade, int maxGrade)
{
	double sum=0;
	int gradesNotMaxMin=0;
	cout<<minGrade<<" "<<maxGrade<<endl;
	for(int i=0;i<judges;i++)
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