#ifndef COMPARE_H
#define COMPARE_H

struct compare {
    int score; /*Understand: The idea is to make a struct, which maps two values, being the sum of PS(Player Score), and sum of DS(Dealer Score)
                    Match: What it will involve: 
                    Comparison Operators within a function
                    Potential loop to iterate and add each individual card value(indice-involved?)
                    printf statement
                    struct to map towards a member for int, or, int array type(subject to change)
                    2 variables of shorthand clause to map to int value/array*/


};

typedef compare score;

extern void scoreDisplay(score scoreData);

#endif