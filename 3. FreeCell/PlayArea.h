/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Lab 3
* Filename:				FreeCells.h
************************************************************************/
#ifndef PlayArea_H
#define PlayArea_H

class Playarea
{
public:
	Playarea();
	Playarea(const Playarea &c);
	~Playarea();

	Playarea &operator= (const Playarea &rhs);
private:
};

#endif