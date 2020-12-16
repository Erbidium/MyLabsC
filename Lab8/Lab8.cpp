#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void swapElems(int& elem1, int& elem2);
int max(int elem1, int elem2);
int **generateEmptyMatrix(int matrixOrder);
void deleteMatrix(int **matrix, int matrixOrder);
void printMatrix(int **matrix, int matrixOrder);
int indexOfMinInArray(int *array, int size);
void swapMinInRowsAndDyagElems(int **matrix, int matrixOrder);
int **createMatrixWithRandElems(int matrixOrder);
int **createMatrixQ(int **matrix1, int **matrix2, int matrixOrder);

const int rangeOfMatrixElems=100;
const int offsetOfRange=0;

int main()
{
	srand(time(NULL));
    int **matrixA, **matrixB, **matrixQ, matrixOrder=0;
	cout<<"Please, enter matrix order: ";
	cin>>matrixOrder;
	matrixA=createMatrixWithRandElems(matrixOrder);
	matrixB=createMatrixWithRandElems(matrixOrder);
	cout<<"Matrix A:\n";
	printMatrix(matrixA, matrixOrder);
	cout<<"Matrix B:\n";
	printMatrix(matrixB, matrixOrder);
	swapMinInRowsAndDyagElems(matrixA, matrixOrder);
	swapMinInRowsAndDyagElems(matrixB, matrixOrder);
	cout<<"Matrix A after replacements:\n";
	printMatrix(matrixA, matrixOrder);
	cout<<"Matrix B after replacements:\n";
	printMatrix(matrixB, matrixOrder);
	matrixQ=createMatrixQ(matrixA, matrixB, matrixOrder);
	cout<<"\nMatrix Q:\n";
	printMatrix(matrixQ, matrixOrder);
	deleteMatrix(matrixA, matrixOrder);
	deleteMatrix(matrixB, matrixOrder);
	deleteMatrix(matrixQ, matrixOrder);
	return 0;
}

void swapElems(int& elem1, int& elem2)
{
	int temp=elem1;
	elem1=elem2;
	elem2=temp;
}

int max(int elem1, int elem2)
{
	return elem1>elem2?elem1:elem2;
}

int **generateEmptyMatrix(int matrixOrder)
{
	int **matrix=new int*[matrixOrder];
	for(int i=0;i<matrixOrder;i++)
	{
		matrix[i]=new int[matrixOrder];
	}
	return matrix;
}


void deleteMatrix(int **matrix, int matrixOrder)
{
	for(int i=0;i<matrixOrder;i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}

void printMatrix(int **matrix, int matrixOrder)
{
	for(int i=0;i<matrixOrder;i++)
	{
		for(int j=0;j<matrixOrder;j++)
		{
			cout<<setw(3)<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}

int indexOfMinInArray(int *array, int size)
{
	int indexMin=0;
	for(int i=1;i<size;i++)
	{
		if(array[indexMin]>array[i]) indexMin=i;
	}
	return indexMin;
}

void swapMinInRowsAndDyagElems(int **matrix, int matrixOrder)
{
	for(int i=0;i<matrixOrder;i++)
	{
		int indexMin=indexOfMinInArray(matrix[i], matrixOrder);
		swapElems(matrix[i][indexMin], matrix[i][i]);
	}
}

int **createMatrixWithRandElems(int matrixOrder)
{
	int **matrix=generateEmptyMatrix(matrixOrder);
	for(int i=0;i<matrixOrder;i++)
	{
		for(int j=0;j<matrixOrder;j++)
		{
			matrix[i][j]=rand()%(rangeOfMatrixElems+1)+offsetOfRange;
		}
	}
	return matrix;
}

int **createMatrixQ(int **matrix1, int **matrix2, int matrixOrder)
{
	int **matrixQ=generateEmptyMatrix(matrixOrder);
	for(int i=0;i<matrixOrder;i++)
	{
		for(int j=0;j<matrixOrder;j++)
		{
			matrixQ[i][j]=max(matrix1[i][j], matrix2[i][j]);
		}
	}
	return matrixQ;
}
