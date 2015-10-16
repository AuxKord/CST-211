/***********************************************************
* Author:				Abdul Yahya
* Created:				10/03/15
* Updated:				10/03/15
* H.W. Number:			CST 211 Assignment 1
* Filename:				driver.cpp
************************************************************/

#include  <iostream>
#include <iomanip>
#include "Array2D.h"

using namespace std;

void fillArray(cArray2D<int> data, int rowCount, int colCount)
{
	for (int r = 0; r < rowCount; ++r )
	{
		cout << " Enter " << colCount << " numbers for the row " << r << ": ";
		for (int c = 0; c < colCount; ++c )
		{
			cin >> data[r][c];
			cout << endl;
		}
	}
}

void printArray(cArray2D<int> data, int rowCount, int colCount)
{
	for (int r = 0; r < rowCount; ++r)
	{
		for (int c = 0; c < colCount; ++c)
		{
			cout << setw(5) << data[r][c];
			cout << endl;
		}
	}
}

int  main()
{
	/***********************************************************
	*
	*					INCOMPLETE
	// declare a two-dimensional array variable
	// and allocate the desired number of rows
	int [][] irregularArray = new int [numberOfRows][];
	// now allocate space for the elements in each row
	for (int i = 0; i < numberOfRows; i++)
	irregularArray[i] = new int [size[i]];
	*
	************************************************************/
	
	cArray2D<int> data;
	int rowCount;
	int colCount;

	cout << "Enter the number of Rows: ";
	cin >> rowCount;
	data.SetRow(rowCount);
	cout << "Enter the number of Columns: ";
	cin >> colCount;
	data.SetCol(colCount);
	cout << endl;


	fillArray(data, rowCount, colCount);

	printArray(data, rowCount, colCount);
	/*
	for (int i = 0; i<W; i++)
		for (int j = 0; j<H; j++)
			oneD[H*i + j] = m[j][i];
	for (int i = 0; i<H*W; i++)
		std::cout << oneD[i] << " ";

		//cout << rowCount << ' ' << colCount;
		//rowCount = data.GetRow(); colCount = data.GetCol();

		for (int r = 0; r < rowCount; ++r )
		{
			for (int c = 0; c < colCount; ++c)
			{
				//data.SetRow (num);
				//data.SetCol (num);

				data[r][c] = num;
				++num;
			}
		}

		for (int r = 0; r < rowCount; ++r)
		{
			cout << "Row: " << data[rowCount][colCount] << ' ' <<  "Col: " 
				 << endl;
		}

		
		//data.Select(rowCount, colCount);
		// Enter data into array
		/*
		for (int r = 0; r < rowCount; ++r )
		{
			for (int c = 0; c < colCount; ++ c)
			{
				data.Select(r, c);
			}
		}
		
		//display array
		cout << "Table of the Array 'Data' displayed by rows and columns"
			 << endl;
		cout << setw(4) << "Row" << setw(8) << "Col"
			<< endl
			<< data.Select(rowCount,colCount);

			*/
		//std::cout << row << std::endl
		//	  << col << std::endl;


		
		//Display the Array
	
	return 0;
}