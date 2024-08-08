#include <stdio.h>
#include "card.h"
//Including code for reference
/*struct card{
    char name[STRLEN+1];
    int pointValue;
    bool cardIsDrawn;
    
};

Listed below are instances of card struct - Jestyn.
*/

//Instances of Ace cards
dk dk1;
dk1.name = "Ace.hearts"
dk1.pointValue = 1;
dk1.cardIsDrawn = false;
dk dk2;
dk1.name = "Ace.clubs"
dk1.pointValue = 1;
dk1.cardIsDrawn = false;
dk dk3;
dk1.name = "Ace.spades"
dk1.pointValue = 1;
dk1.cardIsDrawn = false;
dk dk4;
dk1.name = "Ace.diamonds"
dk1.pointValue = 1;
dk1.cardIsDrawn = false;

//Instances of "2" cards
dk dk5;
dk1.name = "2.hearts"
dk1.pointValue = 2;
dk1.cardIsDrawn = false;
dk dk6;
dk1.name = "2.clubs"
dk1.pointValue = 2;
dk1.cardIsDrawn = false;
dk dk7;
dk1.name = "2.spades"
dk1.pointValue = 2;
dk1.cardIsDrawn = false;
dk dk8;
dk1.name = "2.diamonds"
dk1.pointValue = 2;
dk1.cardIsDrawn = false;

//Instances of "3" cards
dk dk9;
dk1.name = "3.hearts"
dk1.pointValue = 3;
dk1.cardIsDrawn = false;
dk dk10;
dk1.name = "3.clubs"
dk1.pointValue = 3;
dk1.cardIsDrawn = false;
dk dk11;
dk1.name = "3.spades"
dk1.pointValue = 3;
dk1.cardIsDrawn = false;
dk dk12;
dk1.name = "3.diamonds"
dk1.pointValue = 3;
dk1.cardIsDrawn = false;

//Instances of "4" cards
dk dk13;
dk1.name = "4.hearts"
dk1.pointValue = 4;
dk1.cardIsDrawn = false;
dk dk14;
dk1.name = "4.clubs"
dk1.pointValue = 4;
dk1.cardIsDrawn = false;
dk dk15;
dk1.name = "4.spades"
dk1.pointValue = 4;
dk1.cardIsDrawn = false;
dk dk16;
dk1.name = "4.diamonds"
dk1.pointValue = 4;
dk1.cardIsDrawn = false;

//Instances of "5" cards
dk dk17;
dk1.name = "5.clubs"
dk1.pointValue = 5;
dk1.cardIsDrawn = false;
dk dk18;
dk1.name = "5.spades"
dk1.pointValue = 5;
dk1.cardIsDrawn = false;
dk dk19;
dk1.name = "5.hearts"
dk1.pointValue = 5;
dk1.cardIsDrawn = false;
dk dk20;
dk1.name = "5.diamonds"
dk1.pointValue = 5;
dk1.cardIsDrawn = false;

//Instances of "6" cards
dk dk21;
dk1.name = "6.clubs"
dk1.pointValue = 6;
dk1.cardIsDrawn = false;
dk dk22;
dk1.name = "6.spades"
dk1.pointValue = 6;
dk1.cardIsDrawn = false;
dk dk23;
dk1.name = "6.hearts"
dk1.pointValue = 6;
dk1.cardIsDrawn = false;
dk dk24;
dk1.name = "6.diamonds"
dk1.pointValue = 6;
dk1.cardIsDrawn = false;

//Instances of "7" cards
dk dk25;
dk1.name = "7.clubs"
dk1.pointValue = 7;
dk1.cardIsDrawn = false;
dk dk26;
dk1.name = "7.spades"
dk1.pointValue = 7;
dk1.cardIsDrawn = false;
dk dk27;
dk1.name = "7.hearts"
dk1.pointValue = 7;
dk1.cardIsDrawn = false;
dk dk28;
dk1.name = "7.diamonds"
dk1.pointValue = 7;
dk1.cardIsDrawn = false;

//Instances of "8" cards
dk dk29;
dk1.name = "8.clubs"
dk1.pointValue = 8;
dk1.cardIsDrawn = false;
dk dk30;
dk1.name = "8.spades"
dk1.pointValue = 8;
dk1.cardIsDrawn = false;
dk dk31;
dk1.name = "8.hearts"
dk1.pointValue = 8;
dk1.cardIsDrawn = false;
dk dk32;
dk1.name = "8.diamonds"
dk1.pointValue = 8;
dk1.cardIsDrawn = false;

//Instances of "9" cards
dk dk33;
dk1.name = "9.clubs"
dk1.pointValue = 9;
dk1.cardIsDrawn = false;
dk dk34;
dk1.name = "9.spades"
dk1.pointValue = 9;
dk1.cardIsDrawn = false;
dk dk35;
dk1.name = "9.hearts"
dk1.pointValue = 9;
dk1.cardIsDrawn = false;
dk dk36;
dk1.name = "9.diamonds"
dk1.pointValue = 9;
dk1.cardIsDrawn = false;

//Instances of "10" cards
dk dk37;
dk1.name = "10.clubs"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;
dk dk38;
dk1.name = "10.spades"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;
dk dk39;
dk1.name = "10.hearts"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;
dk dk40;
dk1.name = "10.diamonds"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;

//Instances of Jack cards
dk dk41;
dk1.name = "Jack.clubs"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;
dk dk42;
dk1.name = "Jack.spades"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;
dk dk43;
dk1.name = "Jack.hearts"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;
dk dk44;
dk1.name = "Jack.diamonds"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;

//Instances of Queen cards
dk dk45;
dk1.name = "Queen.clubs"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;
dk dk46;
dk1.name = "Queen.spades"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;
dk dk47;
dk1.name = "Queen.hearts"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;
dk dk48;
dk1.name = "Queen.diamonds"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;

//Instances of King cards
dk dk49;
dk1.name = "King.clubs"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;
dk dk50;
dk1.name = "King.spades"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;
dk dk51;
dk1.name = "King.hearts"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;
dk dk52;
dk1.name = "King.diamonds"
dk1.pointValue = 10;
dk1.cardIsDrawn = false;



void displayCard(dk* dkData){

}
