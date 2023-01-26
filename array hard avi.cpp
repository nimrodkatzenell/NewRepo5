#include <iostream>
using namespace std;
#define MAX_SIZE 10
void putValues(int mat[][MAX_SIZE], int val, int size, int rowIndex, int colIndex);
int main()
{
	int table[MAX_SIZE][MAX_SIZE];
	int l = 1;
	putValues(table, 0, MAX_SIZE, 0, 0);

	for (int i = 0; i < MAX_SIZE; i++)
	{
		for (int j = 0; j < MAX_SIZE; j++)
		{
			cout << table[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;
	cout << "please enter number\n";
	int a;
	cin >> a;
	int temp = 0;
	for (int i = MAX_SIZE; i >= 0; i-=2)
	{
		
		if (i - a <= 0)
		{
			for (int j = 0; j < i; j++)
			{
				for (int k = 0; k < i; k++)
				{
					table[j][k] = l;
				}
			}
			
		}
		else
		{
			for (int j = i - a; j < MAX_SIZE - temp && j >= 0; j++)
			{
				for (int k = i - a; k < MAX_SIZE - temp && k >= 0; k++)
				{
					table[j][k] = l;
				}

			}
		}
		l++;
		temp += 2;
	}
	cout << endl << endl;


	for (int i = 0; i < MAX_SIZE; i++)
	{
		for (int j = 0; j < MAX_SIZE; j++)
		{
			cout << table[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;

	//putValues(table, 1, 3, 1, 1);
	//cout << endl;
	//for (int i = 0; i < MAX_SIZE; i++)
	//{
	//	for (int j = 0; j < MAX_SIZE; j++)
	//	{
	//		cout << table[i][j] << "\t";
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//putValues(table, 2, 3, 4, 4);
	//for (int i = 0; i < MAX_SIZE; i++)
	//{
	//	for (int j = 0; j < MAX_SIZE; j++)
	//	{
	//		cout << table[i][j] << "\t";
	//	}
	//	cout << endl;
	//}
	//putValues(table, 5, 3, 5, 5);
	//cout << endl;

	//for (int i = 0; i < MAX_SIZE; i++)
	//{
	//	for (int j = 0; j < MAX_SIZE; j++)
	//	{
	//		cout << table[i][j] << "\t";
	//	}
	//	cout << endl;
	//}

}
void putValues(int mat[][MAX_SIZE], int val, int size, int rowIndex, int colIndex)
{
	for (int i = rowIndex; i < MAX_SIZE && i < rowIndex + size; i++)
	{
		for (int j = colIndex; j < MAX_SIZE && j < colIndex + size; j++)
		{
			mat[i][j] = val;
		}
	}

}

