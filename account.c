
 /* account.c --  bank account implementation */

 #include <stdio.h>
 #include "account.h"


/* Account Functions */


 // initialize account
 void init_acnt(Account * acnt) {
   acnt->acntnum = 0;
   acnt->bal     = 0;
   acnt->lim     = 0;
 }

 // make a new account
 void mk_acnt(Account * acnt) {
   Account temp;

   //init_acnt(&temp);
   puts("Enter Account Number:");
   scanf("%d", &temp.acntnum);
   puts("Enter Account Balance:");
   scanf("%lf", &temp.bal);
   puts("Enter Credit Limit:");
   scanf("%lf", &temp.lim);

   *acnt = temp;

   printf("\nAccount %d created.\n", temp.acntnum);
 }

 // make purchase
 void mk_pch(Account * acnt) {
   double purchase;

   if(acnt->acntnum > 0) {
     puts("Enter price of purchase");
     scanf("%lf", &purchase);
     if(purchase <= acnt->bal && purchase <= acnt->lim) {
       acnt->bal -= purchase;
     } else {
       pmt_fail();
     }
   } else {
     puts("No Account Created!");
   }
 }

 // check account balance
 void chk_bal(Account * acnt) {
   if(acnt->acntnum > 0) {
     printf("Account Balance:\t%.2lf\n", acnt->bal);
   } else {
     puts("No Account Created!");
   }
 }

 // check credit limit
 void chk_crdt(Account * acnt) {
   if(acnt->acntnum > 0) {
     printf("Account Credit Limit:\t%.2lf\n", acnt->lim);
   } else {
     puts("No Account Created!");
   }
 }

 // payment failed
 void pmt_fail() {
   puts("Payment Failed!");
 }

 // lists information about account
 void ls_info(Account * acnt) {
   if(acnt->acntnum > 0) {
   printf("Account Number: \t%d\nAccount Balance: \t$%.2lf\n", acnt->acntnum, acnt->bal);
   } else {
     puts("No Account Created!");
   }
 }
