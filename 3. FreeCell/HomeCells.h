/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Lab 3
* Filename:				HomeCells.h
************************************************************************/
#ifndef HomeCells_H
#define HomeCells_H

class Homecells
{
public:
	Homecells();
	Homecells(const Homecells &c);
	~Homecells();
	
	Homecells &operator= (const Homecells &rhs);
private:
};
#endif