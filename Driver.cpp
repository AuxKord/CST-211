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

		cArray2D<int> sampleArray;
		cArray2D<int> sampleArray1;

		int row, col;

		sampleArray.SetRow(2);
		sampleArray.SetCol(3);
		
		row = sampleArray.GetRow();
		col = sampleArray.GetCol();

		std::cout << row << std::endl
				  << col << std::endl;


	return 0;
}