/*
This has been pretty severely changed since my last update to the repository. I'm working to add comments where I can so we can both effectively track and edit the code.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "Card.h"


void play(){
    
    //srand is here for randomization in card selection, must be declared at either start of main, or in the same body of code that is calling everything else. - Jestyn
    srand(time(0));
    printf("Welcome to BlaCJac!\n\nType 'play' if you would like to play the game, or 'quit' if you would like to leave.\n");
    char input[6];
    scanf("%s", input);


    while(strcmp(input, "quit") != 0)
    {
        //Primary while-loop will run until user inputs "quit", which will exit the game. The user can enter "quit" at any time they are prompted for input.
        //Incidentally, the player can also enter "play" at any point to restart the game regardless of process.
        //Declaring instances of struct card at the start of the loop so that card data is reset if player decides to play again. - Jestyn
        struct card c1 = {"'A of hearts'", 1, 0};
        struct card c2 = {"'2 of hearts'", 2, 0};
        struct card c3 = {"'3 of hearts'", 3, 0};
        struct card c4 = {"'4 of hearts'", 4, 0};
        struct card c5 = {"'5 of hearts'", 5, 0};
        struct card c6 = {"'6 of hearts'", 6, 0};
        struct card c7 = {"'7 of hearts'", 7, 0};
        struct card c8 = {"'8 of hearts'", 8, 0};
        struct card c9 = {"'9 of hearts'", 9, 0};
        struct card c10 = {"'10 of hearts'", 10, 0};
        struct card c11 = {"'J of hearts'", 10, 0};
        struct card c12 = {"'Q of hearts'", 10, 0};
        struct card c13 = {"'K of hearts'", 10, 0};
        struct card c14 = {"'A of diamonds'", 1, 0};
        struct card c15 = {"'2 of diamonds'", 2, 0};
        struct card c16 = {"'3 of diamonds'", 3, 0};
        struct card c17 = {"'4 of diamonds'", 4, 0};
        struct card c18 = {"'5 of diamonds'", 5, 0};
        struct card c19 = {"'6 of diamonds'", 6, 0};
        struct card c20 = {"'7 of diamonds'", 7, 0};
        struct card c21 = {"'8 of diamonds'", 8, 0};
        struct card c22 = {"'9 of diamonds'", 9, 0};
        struct card c23 = {"'10 of diamonds'", 10, 0};
        struct card c24 = {"'J of diamonds'", 10, 0};
        struct card c25 = {"'Q of diamonds'", 10, 0};
        struct card c26 = {"'K of diamonds'", 10, 0};
        struct card c27 = {"'A of clubs'", 1, 0};
        struct card c28 = {"'2 of clubs'", 2, 0};
        struct card c29 = {"'3 of clubs'", 3, 0};
        struct card c30 = {"'4 of clubs'", 4, 0};
        struct card c31 = {"'5 of clubs'", 5, 0};
        struct card c32 = {"'6 of clubs'", 6, 0};
        struct card c33 = {"'7 of clubs'", 7, 0};
        struct card c34 = {"'8 of clubs'", 8, 0};
        struct card c35 = {"'9 of clubs'", 9, 0};
        struct card c36 = {"'10 of clubs'", 10, 0};
        struct card c37 = {"'J of clubs'", 10, 0};
        struct card c38 = {"'Q of clubs'", 10, 0};
        struct card c39 = {"'K of clubs'", 10, 0};
        struct card c40 = {"'A of spades'", 1, 0};
        struct card c41 = {"'2 of spades'", 2, 0};
        struct card c42 = {"'3 of spades'", 3, 0};
        struct card c43 = {"'4 of spades'", 4, 0};
        struct card c44 = {"'5 of spades'", 5, 0};
        struct card c45 = {"'6 of spades'", 6, 0};
        struct card c46 = {"'7 of spades'", 7, 0};
        struct card c47 = {"'8 of spades'", 8, 0};
        struct card c48 = {"'9 of spades'", 9, 0};
        struct card c49 = {"'10 of spades'", 10, 0};
        struct card c50 = {"'J of spades'", 10, 0};
        struct card c51 = {"'Q of spades'", 10, 0};
        struct card c52 = {"'K of spades'", 10, 0};
        /////////////////////////////////////////////////////////////////////////////////////
        struct card cards[52] = {c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13,
                                 c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26,
                                 c27, c28, c29, c30, c31, c32, c33, c34, c35, c36, c37, c38, c39,
                                 c40, c41, c42, c43, c44, c45, c46, c47, c48, c49, c50, c51, c52};
        /////////////////////////////////////////////////////////////////////////////////////

        printf("Game Start!\n\n");
        if(strcmp(input, "play") != 0)
        {
            printf("Unrecognized command, please input either 'play' or 'quit' to continue.\n");
            scanf("%s", input);
        }
        else if(strcmp(input, "play") == 0)
        {
            //Like with the struct, all of these will reset with the loop. - Jestyn
            
            int aceCheck = 0;
            char playerHand[15][15];
            char dealerHand[15][15];
            int playerPointTotal = 0;
            int dealerPointTotal = 0;
            int dealerKnownTotal = 0;


            printf("\nCards will be dealt . . .\n");
                       

            //Initial Deal for Player hand 
            printf("Player's hand is: ");
            for(int i = 0; i < 2; i++)
            {
                int n = random(0, 52);
                if(cards[n].cardDrawn != 0)
                {
                    while(cards[n].cardDrawn != 0)
                    {
                        n = random(0, 52);
                        //printf("\nn is %d and cardDrawn is %d\n", n, cards[n].cardDrawn);
                        //scanf("%s", input);
                        //
                        //This was to make sure that cards were being properly filtered if already having a cardDrawn value of 1.
                    }
                }
                //Checking if player is dealt an ace. This variable will be referenced later; if greater than 1, the player will be asked if they want to add 10 points later
                if(n == 0 || n == 13 || n == 26 || n == 39)
                {
                    aceCheck++;
                }
                strcpy(playerHand[i], cards[n].cardName);
                printf("%s ", playerHand[i]);
                cards[n].cardDrawn = 1;
                playerPointTotal = playerPointTotal + cards[n].cardValue; 
            }
            printf("\nPlayer point total: %d\n", playerPointTotal);
            


            //Initial Deal for dealer hand. Only first card is known.
            printf("Dealer's hand is: ");
            for(int i = 0; i < 2; i++)
            {
                int n = random(0, 52);
                if(cards[n].cardDrawn != 0)
                {
                    while(cards[n].cardDrawn != 0)
                    {
                        n = random(0, 52);
                        //printf("\n n is %d and cardDrawn is %d\n", n, cards[n].cardDrawn);
                        //scanf("%s", input);
                    }
                }
                strcpy(dealerHand[i], cards[n].cardName);
                cards[n].cardDrawn = 1;
                dealerPointTotal = dealerPointTotal + cards[n].cardValue;
                //The player only knows one of the dealer's initial cards. Known score is tracked with dealerKnownTotal.
                //Only one is displayed but both cards are stored in the dealerHand, and the true total is tracked with dealerPointTotal. - Jestyn
                if(i != 1){
                    printf("%s and one unknown.", dealerHand[i]);
                    dealerKnownTotal = dealerKnownTotal + cards[n].cardValue;
                }
            }
            printf("\nDealer's known point total: %d\n\n", dealerKnownTotal);
            //printf("\nDealer full hand: %s, %d points", dealerHand, dealerPointTotal);
            //
            //This is for making sure that the dealerPointTotal is recording correctly. - Jestyn



            //This block is for additional draws.
            //i is defined outside of the while loop for sanity's sake; it is iterated in the loop. - Jestyn
            int i = 2;
            printf("Would you like to draw an additional card?\nPlease enter 'yes', or 'no'.\n");
            scanf("%s", input);
            //First check is for 'no'. If 'no' then this whole block is skipped
            while(strcmp(input, "no") != 0)
            {
                if(strcmp(input, "yes") != 0)
                {
                    printf("Incorrect input. Please respond with either 'yes' or 'no'\n");
                    scanf("%s", input);
                }
                while (strcmp(input, "yes") == 0)
                {
                    int n = random(0, 52);
                    if (cards[n].cardDrawn != 0)
                    {
                        while (cards[n].cardDrawn != 0)
                        {
                            n = random(0, 52);
                            // printf("\nn is %d and cardDrawn is %d\n", n, cards[n].cardDrawn);
                            // scanf("%s", input);
                            //
                            // This was to make sure that cards were being properly filtered if already having a cardDrawn value of 1.
                        }
                    }
                    //Checking if player is dealt an ace. This variable will be referenced later; if greater than 1, the player will be asked if they want to add 10 points later
                    if (n == 0 || n == 13 || n == 26 || n == 39)
                    {
                        aceCheck++;
                    }
                    strcpy(playerHand[i], cards[n].cardName);
                    playerPointTotal = playerPointTotal + cards[n].cardValue;
                    printf("You drew %s\nYour new hand is %s\nYour point total is %d\n\n", cards[n].cardName, playerHand, playerPointTotal);
                    if (playerPointTotal > 21)
                    {
                        while(playerPointTotal > 21)
                        {
                            printf("Your points have exceeded 21, you lose this round!\nWould you like to play again?\n'yes', or 'no'\n");
                            scanf("%s", input);
                            if (strcmp(input, "yes") == 0)
                            {
                                play();
                            }
                            else if(strcmp(input, "no") == 0)
                            {
                                exit(0);
                            }
                            else if (strcmp(input, "yes") != 0)
                            {
                                printf("Unknown command. Would you like to play again?\nPlease enter 'yes' or 'no'\n");
                                scanf("%s", input);
                            }
                        }
                    }
                    printf("Would you like to draw another card?\n'yes', 'no'.\n");
                    scanf("%s", input);
                    i++;
                }   
            }
            if(aceCheck > 0 && playerPointTotal <= 11)
            {
                printf("You have an Ace in your hand, would you like to add 10 points to your total?\n'yes' or 'no'\n");
                scanf("%s", input);
                if(strcmp(input, "yes") == 0)
                {
                    playerPointTotal = playerPointTotal + 10;
                    printf("New player point total is %d\n", playerPointTotal);
                }
            }

            // This block will reveal the dealer's hidden card. Dealer will draw if their point total is 15 or less, until point total is 16 or higher.
            printf("\nNo more draws for the player!!\nThe dealer's hand is %s\nIt holds %d points\n", dealerHand, dealerPointTotal);
            i = 2;
            while (dealerPointTotal < 16)
            {
                int n = random(0, 52);
                if (cards[n].cardDrawn != 0)
                {
                    while (cards[n].cardDrawn != 0)
                    {
                        n = random(0, 52);
                    }
                }
                strcpy(dealerHand[i], cards[n].cardName);
                cards[n].cardDrawn = 1;
                dealerPointTotal = dealerPointTotal + cards[n].cardValue;
                printf("Dealer new hand is %s\nThe point total is %d\n", dealerHand, dealerPointTotal);
                
                i++;
            }
            printf("\nNo more cards for the Dealer. Final hand is %s\nTotal of %d points\n", dealerHand, dealerPointTotal);
            scanf("%s", input);

        }
    }
}

//Define min as 0 and max as 52 when calling function. This, in tandem with srand, is what we use to grab a random card from the deck.
//Example: n = random(0, 52);
//I use n to check whether a card has been drawn before it is added to the player/dealer hand and point totals. - Jestyn
int random(int min, int max){
   return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}
