<<<<<<< HEAD
/*********************************************************************************************************
* Author:                   Abdul Yahya
* Date Created:             10/25/2015
* Last Modification Date:   10/26/2015
* Assignment Number:        Lab 2
* Filename:                 Driver.h
*********************************************************************************************************/

#ifndef Driver_H
#define Driver_H
#include <conio.h>
#include <process.h>
#include <windows.h>

#include "Sorts.h"

void gotoxy(int x, int y)
{
	COORD ord;
	ord.X = x;
	ord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), ord);
}

int MainMenu()
{
	::system("cls");

	gotoxy(10, 4);
	std::cout << "\t\tWelcome to Abdul's Sorting Application";

	gotoxy(10, 5);
	std::cout << "___________________________________________";

	gotoxy(10, 6);
	std::cout << "1. PlaceHolder";

	gotoxy(10, 7);
	std::cout << "2. PlaceHolder";

	gotoxy(10, 8);
	std::cout << "3. Exit";

	gotoxy(10, 9);
	std::cout << "___________________________________________";

	gotoxy(10, 10);
	std::cout << "Enter your Selection: ";
	int m = -1;
	std::cin >> m;

	return m;
}

void Ready(int argc, char *argv[])
{
	argv[1] = "1000";
	int SIZE = atoi(argv[1]);
	int *original = new int[SIZE],
		*ar = new int[SIZE];

	Array<int>	  arr(SIZE);
	vector<int>   vec(SIZE);

	Fill(original, SIZE);
	OriginalFill(SIZE, original, ar, arr, vec);

	/**************************************************************
	* BruteForceBubble
	*												*TODO*
	*		Purpose:  Displays BruteForceBubble Native C-Arrays,
	*				  Arrays, and Vectors on console. Also writes
	*				  to a file.
	****************************************************************/
	/****************
	* Native C-Array
	*****************/
	clock_t start = clock();
	BruteForceBubble<int *, int>(ar, SIZE);
	clock_t time = clock() - start;
	NativeOut("BruteForceBubble - ", time);

	/*******
	* Array
	********/
	start = clock();
	BruteForceBubble<Array<int>, int>(arr, SIZE);
	time = clock() - start;
	ArrayOut(time);

	/********
	* Vector
	*********/
	start = clock();
	BruteForceBubble<vector<int>, int>(vec, SIZE);
	time = clock() - start;
	VectorOut(time);

	OriginalFill(SIZE, original, ar, arr, vec);

	/**************************************************************
	* FlaggedBubble
	*												*TODO*
	*		Purpose:  Displays FlaggedBubble Native C-Arrays,
	*				  Arrays, and Vectors on console. Also writes
	*				  to a file.
	****************************************************************/
	/****************
	* Native C-Array
	*****************/
	start = clock();
	FlaggedBubble<int *, int>(ar, SIZE);
	time = clock() - start;
	NativeOut("  FlaggedBubble - ", time);

	/*******
	* Array
	********/
	start = clock();
	FlaggedBubble<Array<int>, int>(arr, SIZE);
	time = clock() - start;
	ArrayOut(time);

	/********
	* Vector
	*********/
	start = clock();
	FlaggedBubble<vector<int>, int>(vec, SIZE);
	time = clock() - start;
	VectorOut(time);

	OriginalFill(SIZE, original, ar, arr, vec);


	/**************************************************************
	* SelectionSort
	*												*TODO*
	*		Purpose:  Displays SelectionSort Native C-Arrays,
	*				  Arrays, and Vectors on console. Also writes
	*				  to a file.
	****************************************************************/
	/****************
	* Native C-Array
	*****************/
	start = clock();
	SelectionSort<int *, int>(ar, SIZE);
	time = clock() - start;
	NativeOut("  SelectionSort - ", time);

	/*******
	* Array
	********/
	start = clock();
	SelectionSort<Array<int>, int>(arr, SIZE);
	time = clock() - start;
	ArrayOut(time);

	/********
	* Vector
	*********/
	start = clock();
	SelectionSort<vector<int>, int>(vec, SIZE);
	time = clock() - start;
	VectorOut(time);

	OriginalFill(SIZE, original, ar, arr, vec);

	/**************************************************************
	* InsertionSort
	*												*TODO*
	*		Purpose:  Displays InsertionSort Native C-Arrays,
	*				  Arrays, and Vectors on console. Also writes
	*				  to a file.
	****************************************************************/
	/****************
	* Native C-Array
	*****************/
	start = clock();
	InsertionSort<int *, int>(ar, SIZE);
	time = clock() - start;
	NativeOut("  InsertionSort - ", time);

	/*******
	* Array
	********/
	start = clock();
	InsertionSort<Array<int>, int>(arr, SIZE);
	time = clock() - start;
	ArrayOut(time);

	/********
	* Vector
	*********/
	start = clock();
	InsertionSort<vector<int>, int>(vec, SIZE);
	time = clock() - start;
	VectorOut(time);

	OriginalFill(SIZE, original, ar, arr, vec);

	/**************************************************************
	* ShellSort
	*												*TODO*
	*		Purpose:  Displays ShellSort Native C-Arrays,
	*				  Arrays, and Vectors on console. Also writes
	*				  to a file.
	****************************************************************/
	/****************
	* Native C-Array
	*****************/
	start = clock();
	ShellSort<int *, int>(ar, SIZE);
	time = clock() - start;
	NativeOut("      ShellSort - ", time);

	/*******
	* Array
	********/
	start = clock();
	ShellSort<Array<int>, int>(arr, SIZE);
	time = clock() - start;
	ArrayOut(time);

	/********
	* Vector
	*********/
	start = clock();
	ShellSort<vector<int>, int>(vec, SIZE);
	time = clock() - start;
	VectorOut(time);

	OriginalFill(SIZE, original, ar, arr, vec);

	/**************************************************************
	* HeapSort
	*												*TODO*
	*		Purpose:  Displays HeapSort Native C-Arrays,
	*				  Arrays, and Vectors on console. Also writes
	*				  to a file.
	****************************************************************/
	/****************
	* Native C-Array
	*****************/
	start = clock();
	HeapSort<int *, int>(ar, SIZE);
	time = clock() - start;
	NativeOut("       HeapSort - ", time);

	/*******
	* Array
	********/
	start = clock();
	HeapSort<Array<int>, int>(arr, SIZE);
	time = clock() - start;
	ArrayOut(time);

	/********
	* Vector
	*********/
	start = clock();
	HeapSort<vector<int>, int>(vec, SIZE);
	time = clock() - start;
	VectorOut(time);

	OriginalFill(SIZE, original, ar, arr, vec);

	/**************************************************************
	* QuickSort
	*												*TODO*
	*		Purpose:  Displays QuickSort Native C-Arrays,
	*				  Arrays, and Vectors on console. Also writes
	*				  to a file.
	****************************************************************/
	/****************
	* Native C-Array
	*****************/
	start = clock();
	QuickSort<int *, int>(ar, SIZE);
	time = clock() - start;
	NativeOut("      QuickSort - ", time);

	/*******
	* Array
	********/
	start = clock();
	QuickSort<Array<int>, int>(arr, SIZE);
	time = clock() - start;
	ArrayOut(time);

	/********
	* Vector
	*********/
	start = clock();
	QuickSort<vector<int>, int>(vec, SIZE);
	time = clock() - start;
	VectorOut(time);

	OriginalFill(SIZE, original, ar, arr, vec);


	/**************************************************************
	* MergeSort
	*												*TODO*
	*		Purpose:  Displays MergeSort Native C-Arrays,
	*				  Arrays, and Vectors on console. Also writes
	*				  to a file.
	****************************************************************/
	/****************
	* Native C-Array
	*****************/
	start = clock();
	MergeSort<int *, int>(ar, SIZE);
	time = clock() - start;
	NativeOut("      MergeSort - ", time);

	/*******
	* Array
	********/
	start = clock();
	MergeSort<Array<int>, int>(arr, SIZE);
	time = clock() - start;
	ArrayOut(time);

	/********
	* Vector
	*********/
	start = clock();
	MergeSort<vector<int>, int>(vec, SIZE);
	time = clock() - start;
	VectorOut(time);

	OriginalFill(SIZE, original, ar, arr, vec);
	fout.close();
	delete[] original;
	delete[] ar;
}

#endif
=======
/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Lab 2
* Filename:				Driver.h
************************************************************************/
>>>>>>> 2cded19c80cc37122616c61ade2e6d46bb39caca
