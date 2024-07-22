#ifndef COMPARE_H
#define COMPARE_H

struct compare {
    int scoreValue; /*Understand: The idea is to make a struct, which maps two values, being the sum of PS(Player Score), and sum of DS(Dealer Score)
                    Match: What it will involve: 
                    Comparison Operators within a function
                    Potential loop to iterate and add each individual card value(indice-involved?)
                    printf statement
                    struct to map towards a member for int, or, int array type(subject to change)
                    2 variables of shorthand clause to map to int value/array-Andre
                    
                    Update: Okay, the Structs wil contain member, whose traits define a singular card, being;
                    Suit Type:(Can be Heart, Diamond, Club, or Spade.)
                    Card Name:(Can be: Basic Count, jack, King, Queen)
                    pointValue: The value of a singular card type
                    Bool: Cardisdrawn: YES(TRUE), or NO(FALSE)-Andre
                    
                    Plan:
                    DECK and CARDS: Seperate object entities
                    DECK CHARACTERISTICS:
                    Contiguous Memory(Array)
                    Stores variables with unique member characteristics:READ SECTION UPDATE ABOVE
                    Potential Features: Loop through indices 0-n for a card, return it's type, and store it into P(Player) or D(Dealer) deck Note: Dealer = Computer-Andre
                    
                    CARD CHARACTERISTICS:
                    Member Unique(Each card type is unique with specific member characterisitcs)
                    Formulation: Struct-> Typedef Shorthand Struct-> Variable Instance of Struct: Variable contains all card parameters, and is a unique card,
                    Potential Variables(cards) to be created:Unknown, however, we know they must be defined in an variable instance of it's struct.
                    Stored in DECK, with unqiue characterisitcs.-Andre
                    
                    Update 2: Okay, to make this compare function between PS and DS, the program must know what their individual deck of cards, have, logically,
                    this deck of cards will mirror the main DECK array, only specified for user, and can lose card, or gain them.
                    PLAN: Two functions(Really just one, but two instances):
                    FUNCTION: reads through and loops through DECK array, checks each consecutive index, if Player or Dealer chooses index N, index N is copied to their index and removed from DECK location
                    CONCERNS: There is memory location(DECK array), AND, there is the conent itself(VARIABLES with MEMBER TRAITS).
                    How do we remove a variable from the DECK memory location
                    How do we add a variable TO a deck(referring to P's and D's deck) memory location
                    Loops, comparisons, unary operators, MEMORY LOCATION shenanigans(malloc, realloc, pointers)-Andre
                    
                    Final Update: Okay, Here's the actual plan for the compare function:
                    A struct variable instance is made, which maps the indices value within P and D array(specifically pointValue)
                    This instance, stores the pointValue of both P and D
                    To do this, for each consecutive index in the loop, that value must be retained or stored somehow, and the next value is added not
                    only to the memory location, but to the integer content itself(I've tried this before, but failed, time to put on the mantle and try it again).
                    Both values of PS and DS are printed after each individual variables pointValue member is accounted for.-Andre
                    
                    QUESTIONNARE:
                    For Loop, While Loop, Do while loop? Which One: I'll try a for loop, then try to adapt the other ones to see thier benefit-Andre*/


};                      /*How is the player deck and dealer deck size measured? there is no set size in a deck, one moment it can hold 6 cards, the next, 10.-Andre
                            Solution: Maybe use memoryalloc? Something which enables the size to be updated accurately in memory location.-Andre*/

typedef compare score;

extern void scoreDisplay(score scoreData);

#endif
