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
dk2.name = "Ace.clubs"
dk2.pointValue = 1;
dk2.cardIsDrawn = false;
dk dk3;
dk3.name = "Ace.spades"
dk3.pointValue = 1;
dk3.cardIsDrawn = false;
dk dk4;
dk4.name = "Ace.diamonds"
dk4.pointValue = 1;
dk4.cardIsDrawn = false;

//Instances of "2" cards
dk dk5;
dk5.name = "2.hearts"
dk5.pointValue = 2;
dk5.cardIsDrawn = false;
dk dk6;
dk6.name = "2.clubs"
dk6.pointValue = 2;
dk6.cardIsDrawn = false;
dk dk7;
dk7.name = "2.spades"
dk7.pointValue = 2;
dk7.cardIsDrawn = false;
dk dk8;
dk8.name = "2.diamonds"
dk8.pointValue = 2;
dk8.cardIsDrawn = false;

//Instances of "3" cards
dk dk9;
dk9.name = "3.hearts"
dk9.pointValue = 3;
dk9.cardIsDrawn = false;
dk dk10;
dk10.name = "3.clubs"
dk10.pointValue = 3;
dk10.cardIsDrawn = false;
dk dk11;
dk11.name = "3.spades"
dk11.pointValue = 3;
dk11.cardIsDrawn = false;
dk dk12;
dk12.name = "3.diamonds"
dk12.pointValue = 3;
dk12.cardIsDrawn = false;

//Instances of "4" cards
dk dk13;
dk13.name = "4.hearts"
dk13.pointValue = 4;
dk13.cardIsDrawn = false;
dk dk14;
dk14.name = "4.clubs"
dk14.pointValue = 4;
dk14.cardIsDrawn = false;
dk dk15;
dk15.name = "4.spades"
dk15.pointValue = 4;
dk15.cardIsDrawn = false;
dk dk16;
dk16.name = "4.diamonds"
dk16.pointValue = 4;
dk16.cardIsDrawn = false;

//Instances of "5" cards
dk dk17;
dk17.name = "5.clubs"
dk17.pointValue = 5;
dk17.cardIsDrawn = false;
dk dk18;
dk18.name = "5.spades"
dk18.pointValue = 5;
dk18.cardIsDrawn = false;
dk dk19;
dk19.name = "5.hearts"
dk19.pointValue = 5;
dk19.cardIsDrawn = false;
dk dk20;
dk20.name = "5.diamonds"
dk20.pointValue = 5;
dk20.cardIsDrawn = false;

//Instances of "6" cards
dk dk21;
dk21.name = "6.clubs"
dk21.pointValue = 6;
dk21.cardIsDrawn = false;
dk dk22;
dk22.name = "6.spades"
dk22.pointValue = 6;
dk22.cardIsDrawn = false;
dk dk23;
dk23.name = "6.hearts"
dk23.pointValue = 6;
dk23.cardIsDrawn = false;
dk dk24;
dk24.name = "6.diamonds"
dk24.pointValue = 6;
dk24.cardIsDrawn = false;

//Instances of "7" cards
dk dk25;
dk25.name = "7.clubs"
dk25.pointValue = 7;
dk25.cardIsDrawn = false;
dk dk26;
dk26.name = "7.spades"
dk26.pointValue = 7;
dk26.cardIsDrawn = false;
dk dk27;
dk27.name = "7.hearts"
dk27.pointValue = 7;
dk27.cardIsDrawn = false;
dk dk28;
dk28.name = "7.diamonds"
dk28.pointValue = 7;
dk28.cardIsDrawn = false;

//Instances of "8" cards
dk dk29;
dk29.name = "8.clubs"
dk29.pointValue = 8;
dk29.cardIsDrawn = false;
dk dk30;
dk30.name = "8.spades"
dk30.pointValue = 8;
dk30.cardIsDrawn = false;
dk dk31;
dk31.name = "8.hearts"
dk31.pointValue = 8;
dk31.cardIsDrawn = false;
dk dk32;
dk32.name = "8.diamonds"
dk32.pointValue = 8;
dk32.cardIsDrawn = false;

//Instances of "9" cards
dk dk33;
dk33.name = "9.clubs"
dk33.pointValue = 9;
dk33.cardIsDrawn = false;
dk dk34;
dk34.name = "9.spades"
dk34.pointValue = 9;
dk34.cardIsDrawn = false;
dk dk35;
dk35.name = "9.hearts"
dk35.pointValue = 9;
dk35.cardIsDrawn = false;
dk dk36;
dk36.name = "9.diamonds"
dk36.pointValue = 9;
dk36.cardIsDrawn = false;

//Instances of "10" cards
dk dk37;
dk37.name = "10.clubs"
dk37.pointValue = 10;
dk37.cardIsDrawn = false;
dk dk38;
dk38.name = "10.spades"
dk38.pointValue = 10;
dk38.cardIsDrawn = false;
dk dk39;
dk39.name = "10.hearts"
dk39.pointValue = 10;
dk39.cardIsDrawn = false;
dk dk40;
dk40.name = "10.diamonds"
dk40.pointValue = 10;
dk40.cardIsDrawn = false;

//Instances of Jack cards
dk dk41;
dk41.name = "Jack.clubs"
dk41.pointValue = 10;
dk41.cardIsDrawn = false;
dk dk42;
dk42.name = "Jack.spades"
dk42.pointValue = 10;
dk42.cardIsDrawn = false;
dk dk43;
dk43.name = "Jack.hearts"
dk43.pointValue = 10;
dk43.cardIsDrawn = false;
dk dk44;
dk44.name = "Jack.diamonds"
dk44.pointValue = 10;
dk44.cardIsDrawn = false;

//Instances of Queen cards
dk dk45;
dk45.name = "Queen.clubs"
dk45.pointValue = 10;
dk45.cardIsDrawn = false;
dk dk46;
dk46.name = "Queen.spades"
dk46.pointValue = 10;
dk46.cardIsDrawn = false;
dk dk47;
dk47.name = "Queen.hearts"
dk47.pointValue = 10;
dk47.cardIsDrawn = false;
dk dk48;
dk48.name = "Queen.diamonds"
dk48.pointValue = 10;
dk48.cardIsDrawn = false;

//Instances of King cards
dk dk49;
dk49.name = "King.clubs"
dk49.pointValue = 10;
dk49.cardIsDrawn = false;
dk dk50;
dk50.name = "King.spades"
dk50.pointValue = 10;
dk50.cardIsDrawn = false;
dk dk51;
dk51.name = "King.hearts"
dk51.pointValue = 10;
dk51.cardIsDrawn = false;
dk dk52;
dk52.name = "King.diamonds"
dk52.pointValue = 10;
dk52.cardIsDrawn = false;



void displayCard(dk* dkData){

}
