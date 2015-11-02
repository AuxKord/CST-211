/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 1
* Filename:				Driver.cpp
************************************************************************/


//TODO


/***********************************************************
* Author:				Abdul Yahya
* Created:				10/03/15
* Updated:				10/03/15
* H.W. Number:			CST 211 Assignment 1
* Filename:				driver.cpp
************************************************************/

#include  <math.h>
#include  <iostream>

#include  "Array.h"
#include  "Driver.h"


using  namespace  std;

//
// Test valid limits for an Array object with a
// lower index of zero.
//
void  PositiveBasedArrayTest()
{
	Array<int> data;

	cout << "PositiveTest - ";

	SET(data, 0, 9);

	int idx = data.GetStartIndex();
	int len = data.GetLength();

	// Copying Array values from m_array to c.m_array
	for (int j = idx; j <= len; ++j)
	{
		data[j];
		cout << j << ' ';
	}
	cout << endl << endl;
}

// Test valid limits for an Array object with a
// non-zero, positve lower index.
//
void  NegativeBasedArrayTest()
{

	Array<int> data[10];

	cout << "NegativeTest - ";

	for (int j = 0; j >= -10; --j)
	{
		data[j];

		cout << j << ' ';
	}

	cout << endl << endl;
}

// Test valid limits for an Array object with a
// non-zero, negative lower index.
//
void  negativeBasedArrayTest()
{

	Array<int> data[10];

	cout << "NegativeTest - ";

	for (int j = 0; j >= -10; --j)
	{
		data[j];

		cout << j << ' ';
	}

	cout << endl << endl;
}

//
// Display array settings and contents.
//
template<class T>
static void  displayArray(Array<T>  &a, const char  *prompt)
{
	cout << prompt << ":"
		<< "  L: " << a.GetLength()
		<< "  S: " << a.GetStartIndex()
		<< endl << "    Contents: ";

	for (int idx = a.GetStartIndex(); idx <= a.GetLength(); ++idx)
		cout << idx << ' ';

	cout << endl;
}

//
// Test valid the copy constructor for the Array class.
//
/*
void  cctorTest()
{
cArray<int> data[10];
cArray<int> ndata;

for (int j = 0; j <= 10; ++j)
{
data[j];
}

data[10] = ndata;


displayArray(ndata, "Test");

//int lower = 0, upper = 10;

cArray<int> data(5,4);

int sIDX = data.GetStartIndex();
int sLEN = data.GetLength();
cout << endl << "Copy Test" << endl
<< endl << "Original" << endl;
for (int i = sIDX; i <= sLEN; ++i)
{
data.SetLength +1;
data.SetStartIndex +1;
cout << i << ' ';
}

cout << endl << "Copy" << endl;

cArray<int> copydata = data;

for (int i = sIDX; i <= sLEN; ++i)
{
copydata[i];
cout << i << ' ';
}


}
*/

//
// main() program
//
int  main()
{

	// Non-zero positive based array
	PositiveBasedArrayTest();

	// Non-zero negative based array
	NegativeBasedArrayTest();

	//negativeBasedArrayTest();

	// CCTOR
	//cctorTest();


	return  0;
}