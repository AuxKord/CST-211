/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Lab 3
* Filename:				Cascade.h
************************************************************************/
#ifndef Cascade_H
#define Cascade_H

class Cascade
{
public:
	Cascade();
	Cascade(const Cascade &c);
	~Cascade();

	Cascade &operator= (const Cascade &rhs);
private:
};
#endif