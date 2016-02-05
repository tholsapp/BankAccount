
 /* creditlimit.c -- checks credit of an account */

 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>
 #include <string.h>

 #define ACC_MAX 10   // maximum number of accounts
 #define PCH_MAX 25  // maximum number of purchases

 typedef struct account {
   int    accnumber;
   double balance;
   double limit;
   double purchases[PCH_MAX];
   int    purchasecount;
 } Account;


 /* Local Functions */

 static int  menu(void);                     // diplays menu of choices
 static void mkacc(Account * ar);                    // make new account
 static bool isFull(Account * ar);
 //static bool rmacc(void);                    // delete account
 //static bool mkpch();                        // make a purchase
 //static bool chkcdt();                       // check credit
 //static bool mkpmt();                        // add credit to an account
 //static bool chlim();                        // change credit limit
 //static bool ovrlmt();                       // an account is over their credit limit
 //static char lsinfo();                       // list information about account
 //static char lsaccs(Account accounts[]);     // list all accounts
 //static char lspchs();                       // list all purchases made by an account
 //static Account getAccount(int accnum);      // return an account instance

 int main(void) {
   Account accs[ACC_MAX];
   char choice;

   while((choice = menu()) != 'q') {
     switch(choice) {
       case 'a' :     mkacc(accs);
         break;
       case 'b' :     //rmacc();
         break;
       case 'c' :     //mkpch();
         break;
       case 'd' :     //chkcdt();
         break;
       case 'e' :     //mkpmt();
         break;
       case 'f' :     //chlim();
         break;
       case 'g' :     //lsinfo();
         break;
       case 'h' :     //lsaccs();
         break;
       case 'i' :     //lspchs();
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

 static void mkacc(Account * ar) {
   Account temp;

   if(isFull(ar)) {
     puts("No memory for more accounts");
   } else {
     puts("Enter Account Number:");
     scanf("%d\n", &temp.accnumber);
     puts("Enter Balance:");
     scanf("%lf\n", &temp.balance);
     puts("Enter Credit Limit");
     scanf("%lf\n", &temp.limit);
     ar = &temp;
   }

 }

 static bool isFull(Account * ar) {
   if(sizeof(ar) >= ACC_MAX) {
     return true;
   } else {
     return false;
   }
 }

