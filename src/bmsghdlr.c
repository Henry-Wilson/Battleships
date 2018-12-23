/* bmsghdlr.c
message handler code for client and server */

#include "battleships.h" 
#include <stdio.h>

int ClMsgInit(void)
{
  printf("%s\n","Made it to message handler init for the Client");
  return 0;
}

int ClMsgMain(void)
{
  printf("%s\n", "Executing message handler main for client.");
  for(int x = 0; x < 16; x = x + 1)
  {
    if(comms[x] == (char*)0)
    {
      printf("%s", "Last command at index: ");
      printf("%d\n", x);
      break;
    }
    printf("%s", "Found Command: ");
    printf("%d",comms[x]);
    printf("\n");
  }
}

