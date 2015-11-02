/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Assignment 1
* Filename:				Driver.h
************************************************************************/


//TODO


//
// CST 136 - Assignment #3 (test program)
//
// Michael Hoffman
//
//
// File: test.h
// Header file of common declarations for test program.
//


#ifndef  Driver_H
#define  Driver_H


//
// Uncomment the next line to use at() member function
// instead of set() or get()
//
//#define  USE_AT


#ifdef  USE_AT
#  define  SET( a, i, v )   ( (a).at(i) = (v) )
#else
#  define  SET( a, i, v)   ( (a).SetStartIndex(i), (a).SetLength(v) )
#endif


#ifdef  USE_AT
#  define  GET( a, i )   ( (a).at(i) )
#else
#  define  GET( a, i, v )   ( (a).GetStartIndex(i), (a).GetLength(v) )
#endif




#endif