/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Lab 2
* Filename:				Sorts.h
************************************************************************/	
#ifndef Sorts_H
#define Sorts_H
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <iostream>
/************************************************************************
* Class: Sort
*
* Purpose: 
*	Constructors:
*	Destructor:
*	Operators:
*	Accessors:
*	Mutators:
************************************************************************/
#include "Array.h"
#include "Exception.h"

using std::vector; using std::cout; using std::cin;

template<typename T>
class Sort
{
public:
	Sort();

	void BruteForceBubble(T &ar, int aSize);

	void FlaggedBubble(T& ar, int aSize, bool flagged);

	void SelectionSort(T& ar, int aSize);

	void InsertionSort(T &ar, int aSize);

	void ShellSort(T &ar, int aSize);

	void HeapSort(T &ar, int aSize);
	void HeapMoveDown(T &data, int index, int last);

	void QuickSort(T &ar, int aSize);
	void QuickSort(T & ar, int first, int last);

	void MergeSort(T &ar, int aSize);
	void Merge(T &ar, N * temp, int left, int mid, int right);

private:
	void Fill(int fill[], int aSize);
	void SetOriginal(int Array[], cArray<int> &marray, vector<int> &vector, int arraySize, const int fill[]);
	void SwapIndices(T *ar, int i1, int i2);
};

#include "Sorts.inc"
#endif

