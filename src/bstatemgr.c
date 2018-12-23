/* bstatemgr.c
games state manager code for server and state model code for client*/

#include "battleships.h"
#include <stdio.h>

char* comms[16];

int ClGsmInit(void)
{
  printf("%s\n","Made it to Game State Manager init for the Client");
  return 0;
}
int ClGsmMain(void)
{
  printf("%s\n","Executing Gsm Main for Client. Commands: 1 2 3 4");
  comms[0] = (char*)1;
  comms[1] = (char*)32;
  comms[2] = (char*)64;
  comms[3] = (char*)128;
}
