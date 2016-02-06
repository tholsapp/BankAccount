
 /* bankaccount.c -- bank account simulation */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "account.h"


 /* Local Functions */

 static int  menu(void);                       // diplays menu of choices


 int main(void) {
   Account *acnt;
   char choice;

   while((choice = menu()) != 'q') {
     switch(choice) {
       case 'a' :     mk_acnt(acnt);
         break;
       case 'b' :     ls_info(acnt);
         break;
       case 'c' :     //mkpch();
         break;
       default  : puts("Switching error");
     }
   }

   puts("Bye! Have a beautiful time");
 }

 static int menu(void) {
   int ch;

   puts("\n     Enter the letter corresponding to your choice:\n");
   puts("    a) Create New Account        b) List Information");
   puts("    d) Delete Account            e) ");
   puts("    f) ");
   puts("    q) QUIT");

   while((ch = getchar()) != EOF) {
     while(getchar() != '\n') {       // discard rest of line
       continue;
     }
     if(strchr("abcdefghq", ch) == NULL) {
       puts("INVALID INPUT");
     } else {
       break;
     }
   }
     if(ch == EOF) {                 // make EOF cause program to quit
       ch = 'q';
     }
     return ch;
 }

