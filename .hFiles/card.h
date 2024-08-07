#ifndef CARD_H
#define CARD_H

#include <stdio.h>
#include <stdbool.h>

#define STRLEN 100

struct card{
    char name[STRLEN+1];
    int pointValue;
    bool cardIsDrawn;
    
};
typedef struct card dk;
/*array cardPlayer[handsize];
for(int i = 0; i < 2; i++){

cardPlayer[i].name = drawPlayercard(primaryDeck[b].name);
char drawPlayercard(primaryDeck ){
    
    
}
return card;

8/4: Experimenting with code for drawing cards, use as needed. NOT FUNCTIONAL - Jestyn*/


//typedef struct cardDeck deck;
/*Jestyn: Keeping this a comment for now because we want cards and 
the deck to be seperate objects. Deck should be an array that stores
instances of cards. Will revisit this later tho.*/

extern void displayCard(card cardData); //Changed displayCardType to displayCard, updated

#endif
//Andre: This is just a start, you can change this if needed, this is jsut a vague start for the card deck implementation
//Andre: I assume we're using character arrays, but I'm not the one responsible so could be different, but I would like to understand.
