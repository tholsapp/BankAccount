
 /* main.c -- bank account simulation */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "account.h"


 /* Local Functions */

 static int  menu(void);                      // processes choice from user
 static void menu_options(void);              // prints menu of choices

 int main(void) {
   Account *acnt;
   char choice;

   init_acnt(acnt);
   while((choice = menu()) != 'q') {
     switch(choice) {
       case 'a' :     mk_acnt(acnt);
         break;
       case 'b' :     ls_info(acnt);
         break;
       case 'c' :     mk_pch(acnt);
         break;
       case 'd' :     chk_bal(acnt);
         break;
       case 'e' :     chk_crdt(acnt);
         break;
       default  : puts("Switching error");
     }
   }

   puts("Bye! Have a beautiful time");
   return 0;
 }

 static int menu(void) {
   int ch;

   menu_options();

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

 static void menu_options(void) {
     puts("\n     Enter the letter corresponding to your choice:\n");
     puts("    a) Create New Account        b) List Information");
     puts("    c) Make Purchase             d) Check Balance");
     puts("    e) Check Credit Limit");
     puts("    q) QUIT");
 }

