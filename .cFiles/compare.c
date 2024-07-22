#include <stdio.h>
#include "compare.h"
#include "username.h"


void displayScore(score scoreData){
    printf("%s Scored:%d, Dealer Score: %d",playername.name, ps, ds);//To include the player-name it must become global, also loop maybe be incorporated in the main for the sake of the struct values.
                                                                    //Definitely not done yet, gonna have to figure out the loop in a seperate file, will port to main if I have something substantial, but, probably wont be done during or after class(got to figure out memory location tricks, bend the rules)
}

/*
//Driver Code
int main () {


//Compare Function
  for(int i = 0; i < sz; i++);//Size needs to be dynamic for DECK type objects(malloc utility?) wondering how to effectively implement it at the moment.-Andre
                              //Okay, I realize with structs, it comes to my question, how much byte space would our defined structs take up. Like, within a DECK object type, I assume it's counting the member data types, but, I'm still ultimately learning their applicability, could be wrong-Andre
  
  return 0;
};

*/
