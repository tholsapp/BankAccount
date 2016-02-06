
 /* account.c -- account implementation */

 #include <stdio.h>
 #include <stdbool.h>
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

   init_acnt(&temp);
   puts("Enter Account Number:");
   scanf("%d", &temp.acntnum);
   puts("Enter Account Balance:");
   scanf("%lf", &temp.bal);
   puts("Enter Credit Limit:");
   scanf("%lf", &temp.lim);

   *acnt = temp;
 }

 // make purchase
 void mk_pch(Account * acnt) {
   double purchase;

   puts("Enter price of purchase");
   scanf("%lf\n", &purchase);
   if(purchase <= acnt->bal &&
       purchase <= acnt->lim) {
   } else {
     pmt_fail();
   }
 }

 // check account balance
 bool chk_bal(Account * acnt) {
   return false;
 }

 // check credit limit
 bool chk_crdt(Account * acnt) {
   return false;
 }

 // payment failed
 void pmt_fail() {
   puts("Payment Failed!");
 }

 // list information about account
 void ls_info(Account * acnt) {
   printf("Account Number: \t%d\nAccount Balance: \t$%.2lf\n", acnt->acntnum, acnt->bal);
 }
