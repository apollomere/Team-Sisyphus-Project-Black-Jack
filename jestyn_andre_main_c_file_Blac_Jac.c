//Add more external hFile-Types here.
//Ensure .cFile counterparts include the .hFile counterpart.
#include <stdio.h>
#include <string.h>
#include <stdiolib.h>
#include "username.h"
//Driver Code
int main () {

//Player Name Section Start//
  pn playername;//Struct Variable inititalization(pn for playername)
  printf("Enter your name: ");
  scanf("\n%s", playername.name);/*Note: Typically & required for scanf, but, got errors for it, could just be me, 
  worked on gdbonline, but got "collect2.exe: error: ld returned 1 exit status" Not sure how to fix it yet. x_x-Andre*/
  
  register_name(playername);//User Input Defined Field, playername assignment.
//Player Name Section End//

  
  
  return(0);
};
