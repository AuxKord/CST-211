/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Lab 2
* Filename:				Sorts.inc
************************************************************************/
#ifndef Sorts_i
#define Sorts_i

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template <typename T>
Sort::Sort()
{
	// NOTHING
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template<typename T>
void Sort<T>::BruteForceBubble(T &ar, int aSize)
{
	for (int i = 0; i < aSize; ++i)
		for (int j = 0; j < aSize - 1; ++j)
			if (ar[j] > ar[j + 1])
				SwapIndices(ar, j, j +1);
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template<typename T>
void Sort<T>::FlaggedBubble(T &ar, int aSize, bool flagged)
{
	for (int i = 0; i < aSize; ++i)
	{
		flagged = false;
		for (int j = 0; j < aSize - 1; ++j)
			if (ar[j] > ar[j + 1])
			{
				SwapIndices(ar, j, j + 1);
				flagged = true;
			}
		if !(flagged)
			break;
	}
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template<typename T>
void Sort<T>::SelectionSort(T &ar, int aSize)
{
	for (int i = 0; i < aSize + 1; ++i)
	{
		int max (i), c;
		for (int j = i - 1; j > aSize; ++j)
		{
			if (ar[j] > ar[max]])
				max = j;
		}
		if !(max = i)
			Swap(ar, i, max);
	}
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template<typename T>
void Sort<T>::InsertionSort(T &ar, int aSize)
{
	for (int i = 0; i < aSize; ++i)
		while (int j = i; j > 0 && ar[j] < ar[j - 1])
			SwapIndices(ar, j, j - 1); --j;
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template<typename T>
void Sort<T>::ShellSort(T &ar, int aSize)
{
	
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template<typename T>
void Sort<T>::HeapSort(T &ar, int aSize)
{
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template<typename T>
void Sort<T>::HeapMoveDown(T &ar, int index, int last)
{
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template<typename T>
void Sort<T>::QuickSort(T & ar, int aSize)
{
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template<typename T>
void Sort<T>::QuickSort(T & ar, int first, int last)
{
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template<typename T>
void Sort<T>::MergeSort(T & ar, int aSize)
{
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template<typename T>
void Sort<T>::Merge(T & ar, N * temp, int left, int mid, int right)
{
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template<typename T>
void Sort<T>::Fill(int fill[], int arraySize)
{
	srand((unsigned)time(0));
	for (int i = 0; i < arraySize; ++i )
		Fill[i] =
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template<typename T>
void Sort<T>::SetOriginal(int Array[], cArray<int>& marray, vector<int>& vector, int arraySize, const int fill[])
{
}

/*****************************************************************
// NEEDS COMMENTS
*****************************************************************/
template <typename T>
void Sort::SwapIndices(T *ar, int i1, int i2)
{
	T swap = ar[i1];
	ar[i1] = ar[i2];
	ar[i2] = swap;
}

#endif