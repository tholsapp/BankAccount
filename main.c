
 /* bankaccount.c -- checks credit of an account */

 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>
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
       case 'b' :     //rmacc();
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
   puts("    a) Create New Account        b) Delete Account");
   puts("    c) Make Purchase             d) Get Available Credit");
   puts("    e) Payoff Debt               f) Change Credit Limit");
   puts("    g) List Info                 h) List Accounts");
   puts("    i) List Purchases            q) QUIT!\n");

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

