/* bcexec.c
executive module for the client of the battleships game
*/

#include "battleships.h"

int main(int argc, char* argv[])
{

int sktErrNo, gsmErrNo, msgErrNo, uiErrNo;

/* initialization */

sktErrNo = ClSktInit(); /* init socket */
gsmErrNo = ClGsmInit(); /* init game state manager */
msgErrNo = ClMsgInit(); /* init message handler */
uiErrNo = ClUiInit(); /* init user interface */

/* MAIN LOOP */
while (1){
	/*Service Socket */
	/*Service msg hdlr */
	/*Service GS mgr */
}

return 0;

}
