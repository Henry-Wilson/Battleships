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
  printf("%s\n","Executing Gsm Main for Client. Commands: 1 4 3 2");
  comms[0] = (char*)1;
  comms[1] = (char*)4;
  comms[2] = (char*)3;
  comms[3] = (char*)2;
}

int ClGsmClearComms(void)
{
  for(int a = 0; a < 16; a = a + 1)
  {
    comms[a] = (char*)0;
  }
}
