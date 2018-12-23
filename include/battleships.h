int ClSktInit(void) ; /* init client socket */
int ClGsmInit(void) ; /* init client game state manager */
int ClMsgInit(void) ; /* init client message handler */
int ClUiInit(void) ; /* init client user interface */

int ClGsmMain(void); /* Main method for the state manager, to be called in client exec loop.*/
int ClMsgMain(void); /* Main method for the message handler, to be called in client exec loop.*/

int ClGsmClearComms(void); /*Clear the commands array for next use!*/

char* comms[16];

#define CLCOMM1 1
#define CLCOMM2 2
#define CLCOMM3 3
#define CLCOMM4 4
