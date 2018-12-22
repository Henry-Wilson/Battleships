/* bcui.c
client ui code */

#include "battleships.h"
#include <stdio.h>

int ClUiInit(void)
{
  printf("%s\n","Made it to Ui init for the Client");
  PaintSplash();
  return 0;
}

int PaintSplash(void){

/*
char* splash = 
"          1         2         3         4         5         6         7         "
"01234567890123456789012345678901234567890123456789012345678901234567890123456789"
" ****    *   *****      "
"  *  *  * *    *                                                                "
"  *  * *   *   *        "
"  ***  *****   *        "
"  *  * *   *   *        "
"  *  * *   *   *        "
" ****  *   *   *        "
*/

char* splash[0] = 
"                                                           ____                 "	
char* splash[1] =
"    (            )    )  (              )                  |   /                " 
char* splash[2] =
"  ( )\     )  ( /( ( /(  )\   (      ( /( (                |  /                 " 
char* splash[3] =
"  )((_) ( /(  )\()))\())((_) ))\ (   )\()))\  `  )   (     | /                  " 
char* splash[4] =
" ((_)_  )(_))(_))/(_))/  _  /((_))\ ((_)\((_) /(/(   )\    |/                   "
char* splash[5] =
"  | _ )((_)_ | |_ | |_  | |(_)) ((_)| |(_)(_)((_)_\ ((_)  (                     "
char* splash[6] =
"  | _ \/ _` ||  _||  _| | |/ -_)(_-<| ' \ | || '_ \)(_-<  )\                    "
char* splash[7] =
"  |___/\__,_| \__| \__| |_|\___|/__/|_||_||_|| .__/ /__/ ((_)                   "
char* splash[8] =
"                                             |_|                                " 
for(int i = 0;i <= 8;i++)
	printf("%s\n",splash[i]);
}


                                                          ____ 