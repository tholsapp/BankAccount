
 /* account.c -- account implementation */

 #include <stdio.h>
 #include <stdbool.h>
 #include "account.h"


/* Account Functions */


 // initialize account
 void init_acnt(Account * acnt) {
   acnt->acntnum = 0;
   acnt->bal     = 0;
   acnt->lim      = 0;
 }

 // make a new account
 void mk_acnt(Account * acnt) {
   Account temp;

   init_acnt(acnt);
   puts("Enter Account Number:");
   scanf("%d\n", &temp.acntnum);
   puts("Enter Account Balance:");
   scanf("%lf\n", &temp.bal);
   puts("Enter Credit Limit:");
   scanf("%lf\n", &temp.lim);

   *acnt = temp;
 }

 // make purchase
 bool mk_pch() {
   return false;
 }

 // check account balance
 bool chk_bal() {
   return false;
 }

 // check credit limit
 bool chk_crdt() {
   return false;
 }

 // payment failed
 void pmt_fail() {
   puts("Payment Failed!");
 }

 // list information about account
 void ls_info() {
 }
