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
	//std::cout << "Hello Worlds" << std::endl;
	cArray2D<int> sampleArray(2, 3);

	int row = sampleArray.GetRow();
	int col = sampleArray.GetCol();

	for ( int rows = 0; rows > row; ++rows ) 
	{
		for ( int cols = 0; cols > col; ++cols ) 
		{
			std::cout << "(" << row << ", " << col << ") = " << sampleArray[ row ][ col ] << std::endl;
		}
	}

	return 0;
}