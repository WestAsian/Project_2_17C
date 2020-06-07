/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   card.h
 * Author: duong
 *
 * Created on April 24, 2020, 5:16 PM
 */

#ifndef CARD_H
#define CARD_H

#include <ostream>


enum COLOR { wild, red, green, blue, yellow}; 
/**
 * Represents a card in a deck 
 */
class card
{
	public:
		int number; 
		COLOR color; 


		bool operator==(card const & other) const;

		bool operator!=(card const & other) const;

		
		card(); 

		card(int num, COLOR col); 
}; 

std::ostream & operator<<(std::ostream & out, card const & temp_card);


#endif /* CARD_H */

