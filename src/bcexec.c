/* bcexec.c
executive module for the client of the battleships game
*/

#include "battleships.h"
#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[])
{

int sktErrNo, gsmErrNo, msgErrNo, uiErrNo;

/* initialization */

sktErrNo = ClSktInit(); /* init socket */
gsmErrNo = ClGsmInit(); /* init game state manager */
msgErrNo = ClMsgInit(); /* init message handler */
uiErrNo = ClUiInit(); /* init user interface */

printf("hello world from bcexec\n");

/* MAIN LOOP */
while (1){
  /*Service Socket FIRST*/
  //ClSktMain();
  /*Service GS mgr SECOND*/
  //ClGsmMain();
  /*Service msg hdlr THIRD*/
  ClMsgMain();
  printf("hi\n");
  sleep(1);
}

return 0;

}
