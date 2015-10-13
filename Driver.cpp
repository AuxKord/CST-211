/***********************************************************
* Author:				Abdul Yahya
* Created:				10/03/15
* Updated:				10/03/15
* H.W. Number:			CST 211 Assignment 1
* Filename:				driver.cpp
************************************************************/

#include  <iostream>
#include "Array2D.h"

int  main()
{
		std::cout << "Hello Worlds" << std::endl;

		cArray2D<int> sampleArray(4,4);
		cArray2D<int> sampleArray1;

		int rowCount, colCount;
		
		rowCount = sampleArray.GetRow();
		colCount = sampleArray.GetCol();

		//std::cout << row << std::endl
			//	  << col << std::endl;

		for (int row = 0; rowCount > row; ++row) {
			for (int col = 0; colCount > col; ++col) {
				std::cout << "(" << row << ", " << col << ") = " << sampleArray[row][col] << std::endl;
			}
		}

		sampleArray = sampleArray1;

		for (int row = 0; rowCount > row; ++row) {
			for (int col = 0; colCount > col; ++col) {
				std::cout << "(" << row << ", " << col << ") = " << sampleArray1[row][col] << std::endl;
			}
		}


	return 0;
}