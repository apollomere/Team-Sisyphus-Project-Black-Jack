#ifndef USERNAME_H
#define USERNAME_H
#define MAXLEN 50
#include <string.h>//Might use this library, IDK, may remove later.


struct username {
    char name[MAXLEN];/*Ok this is where it might get tricky,
    should we reference the player name when taking certain
    actions, OR, should we just refernce it at the end, like "player_name won!" :P*/
};

typedef struct username pn; /*I'll have to do more research, maybe a struct
is necesarry for the entire project, or maybe there's a more effective way for this, I'll stick to
protocol for now and just use structs.*/

extern void register_name(pn pnData);//Function reference (pn shortened for player name)

#endif