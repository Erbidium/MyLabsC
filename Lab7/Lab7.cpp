#include <iostream>
#include <ctime>

using namespace std;

void getGrades(int *, int, const int, const int);
void printGrades(int*, int);
int getIndexOfMinGrade(int *, int);
int getIndexOfMaxGrade(int *, int);
float getAverage(int *, int);
int getNumberOfJudges();

int main()
{
    int judges, indexOfMaxGrade, indexOfMinGrade;
	const int minPossibleGrade=0, maxPossibleGrade=12;
	float athleteResult;
	judges=getNumberOfJudges();
	int* grades=new int[judges];
	getGrades(grades, judges, minPossibleGrade, maxPossibleGrade);
	printGrades(grades, judges);
	indexOfMaxGrade=getIndexOfMaxGrade(grades, judges);
	indexOfMinGrade=getIndexOfMinGrade(grades, judges);
	grades[indexOfMaxGrade]=-1;
	grades[indexOfMinGrade]=-1;
	athleteResult=getAverage(grades, judges);
	cout<<"The athlete received "<<athleteResult<<" points for the performance\n";
	delete[] grades;
}

int getNumberOfJudges()
{
	bool input=false;
	int judges;
	cout<<"Enter a number of judges: ";
	do
	{
		cin>>judges;
		if((judges>=3)&&(judges<=10)) input=true;
		else cout<<"Please, enter a number of judges again!\n";
	}
	while(input!=true);
	return judges;
}

void getGrades(int *grades, int judges, const int minPossibleGrade, const int maxPossibleGrade)
{
	srand(time(NULL));
	for(int i=0;i<judges;i++)
	{
		grades[i]=rand()%(maxPossibleGrade-minPossibleGrade)+minPossibleGrade;
	}
}

void printGrades(int* grades, int judges)
{
	cout<<"Grades from judges: ";
	for(int i=0;i<judges;i++)
	{
		cout<<grades[i]<<" ";
	}
	cout<<endl;
}

int getIndexOfMinGrade(int *grades, int judges)
{
	int indexMin=0;
	for(int i=1;i<judges;i++)
	{
		if(grades[indexMin]>grades[i]) indexMin=i;
	}
	return indexMin;
}

int getIndexOfMaxGrade(int *grades, int judges)
{
	int indexMax=0;
	for(int i=1;i<judges;i++)
	{
		if(grades[indexMax]<grades[i]) indexMax=i;
	}
	return indexMax;
}

float getAverage(int *grades, int judges)
{
	float sum=0;
	int realNumOfGrades=0;
	for(int i=1;i<judges;i++)
	{
		sum+=grades[i];
		if((grades[i]!=0)&&(grades[i]>=0)) realNumOfGrades++;
	}
	float average=sum/realNumOfGrades;
	return average;
}