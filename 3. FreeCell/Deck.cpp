/**********************************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/25/15
* H.W. Number:			Lab 3
* Filename:				Deck.cpp
************************************************************************/
#include "Deck.h"

Deck::Deck() : mSuit(0), mRank(0)
{
}

Deck::Deck(char suit, int rank) : mSuit(suit), mRank(rank)
{

}

Deck::Deck(const Deck &c) : mSuit(c.mSuit), mRank(c.mRank)
{

}

bool Deck::redCard()
{

}

