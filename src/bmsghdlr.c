/* bmsghdlr.c
message handler code for client and server */

#include "battleships.h" 
#include <stdio.h>

int ExComm1(void);
int ExComm2(void);
int ExComm3(void);
int ExComm4(void);

int ClMsgInit(void)
{
  printf("%s\n","Made it to message handler init for the Client");
  return 0;
}

int ExComm1(void)
{
  printf("%s\n","Executed Message handler command 1!");
  return 0;
}


int ExComm2(void)
{
  printf("%s\n","Executed Message handler command 2!");
  return 0;
}


int ExComm3(void)
{
  printf("%s\n","Executed Message handler command 3!");
  return 0;
}


int ExComm4(void)
{
  printf("%s\n","Executed Message handler command 4!");
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
      printf("%d\n", x-1);
      break;
    }
    printf("%s", "Found Command: ");
    printf("%d\n",comms[x]);
    switch((char)comms[x])
    {
      case (char)1 :
        ExComm1();
        break;

      case (char)2 :
        ExComm2();
        break;

      case (char)3 :
        ExComm3();
        break;
      
      case (char)4 :
        ExComm4();
        break;
    }
  }
  ClGsmClearComms();
  printf("%s\n","Cleared commands array after successful completion.");
}

