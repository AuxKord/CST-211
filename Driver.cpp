/***********************************************************
* Author:				Abdul Yahya
* Created:				10/03/15
* Updated:				10/03/15
* H.W. Number:			CST 211 Assignment 1
* Filename:				driver.cpp
************************************************************/

#include  <iostream>
#include "Array2D.h"

using namespace std;


int  main()
{
	/***********************************************************
	*
	*					INCOMPLETE
	*
	************************************************************/
	
		cArray2D<int> sampleArray(5, 5);
		//cArray2D<int> sampleArray1;

		int rowCount = 10, colCount = 10;

		rowCount = sampleArray.Select(1,1);
		colCount = sampleArray.GetCol();

		//std::cout << row << std::endl
		//	  << col << std::endl;


		for (int row = 0; rowCount > row; ++row) {
			for (int col = 0; colCount > col; ++col) {
				std::cout << "(" << row << ", " << col << ") = " << sampleArray[row][col] << std::endl;
			}
		}
		

	return 0;
}