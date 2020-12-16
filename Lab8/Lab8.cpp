#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

int **createEmptySquareMatrix(int matrixOrder);
void fillMatrixWithRandElems(int **matrix, int matrixOrder);
void deleteMatrix(int **matrix, int matrixOrder);
void printMatrix(int **matrix, int matrixOrder);
int minInRow(int *array, int size);
void swapMinInRowsAndDyagElems(int **matrix, int matrixOrder);
void fillMatrixQ(int **matrixA, int **matrixB, int **matrixQ, int matrixOrder);

const int rangeOfMatrixElems=100;

int main()
{
	srand(time(NULL));
    int **matrixA, **matrixB, **matrixQ, matrixOrder=0;
	cout<<"Please, enter matrix order: ";
	cin>>matrixOrder;
	matrixA=createEmptySquareMatrix(matrixOrder);
	matrixB=createEmptySquareMatrix(matrixOrder);
	matrixQ=createEmptySquareMatrix(matrixOrder);
	fillMatrixWithRandElems(matrixA, matrixOrder);
	fillMatrixWithRandElems(matrixB, matrixOrder);
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
	fillMatrixQ(matrixA, matrixB, matrixQ, matrixOrder);
	cout<<"\nMatrix Q:\n";
	printMatrix(matrixQ, matrixOrder);
	deleteMatrix(matrixA, matrixOrder);
	deleteMatrix(matrixB, matrixOrder);
	deleteMatrix(matrixQ, matrixOrder);
	return 0;
}

int **createEmptySquareMatrix(int matrixOrder)
{
	int **matrix=new int*[matrixOrder];
	for(int i=0;i<matrixOrder;i++)
	{
		matrix[i]=new int[matrixOrder];
		for(int j=0;j<matrixOrder;j++)
		{
			matrix[i][j]=0;
		}
	}
	return matrix;
}

void fillMatrixWithRandElems(int **matrix, int matrixOrder)
{
	for(int i=0;i<matrixOrder;i++)
	{
		for(int j=0;j<matrixOrder;j++)
		{
			matrix[i][j]=rand()%(rangeOfMatrixElems+1);
		}
	}
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

int minInRow(int *array, int size)
{
	int min=array[0];
	for(int i=1;i<size;i++)
	{
		if(min>array[i]) min=array[i];
	}
	return min;
}

void swapMinInRowsAndDyagElems(int **matrix, int matrixOrder)
{
	for(int i=0;i<matrixOrder;i++)
	{
		int minRowElem=minInRow(matrix[i], matrixOrder);
		int diagElem=matrix[i][i];
		for(int j=0;j<matrixOrder;j++)
		{
			if(matrix[i][j]==minRowElem) matrix[i][j]=diagElem;
		}
		matrix[i][i]=minRowElem;
	}
}

void fillMatrixQ(int **matrixA, int **matrixB, int **matrixQ, int matrixOrder)
{
	for(int i=0;i<matrixOrder;i++)
	{
		for(int j=0;j<matrixOrder;j++)
		{
			matrixQ[i][j]=max(matrixA[i][j], matrixB[i][j]);
		}
	}
}
