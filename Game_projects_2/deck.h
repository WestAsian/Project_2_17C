/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   deck.h
 * Author: duong
 *
 * Created on April 25, 2020, 12:00 AM
 */

#ifndef DECK_H
#define DECK_H

#include "card.h"
class deck : public card {
	public: 
		deck(); 
		deck(const deck & other); 
		const deck & operator= (const deck & other); 
		~deck(); 
		void shuffle(); 
		card draw(); 
		void create(); 
		int add_card(card temp_card);
		void quick_shuffle(); 
		void print_deck(); 
		int get_size(); 

	private:  
		card * ptr_deck;
		int size; 
		void clear(); 
		void copy(const deck & other); 
}; 

std::ostream & operator<<(std::ostream & out, deck const & temp_deck);


#endif /* DECK_H */

