
 /* account.c --  bank account implementation */

 #include <stdio.h>
 #include "account.h"


 /* Account Functions */


 // initialize account
 void init_acnt(Account * acnt) {
   acnt->acntnum = 0;
   acnt->bal     = 0;
   acnt->lim     = 0;
   acnt->pc      = 0;
 }

 // make a new account
 void mk_acnt(Account * acnt) {
   Account temp;

   init_acnt(&temp);
   puts("Enter First Name:");
   scanf("%20s", temp.fname);
   puts("Enter Last Name:");
   scanf("%20s", temp.lname);
   puts("Enter Account Number:");
   scanf("%d", &temp.acntnum);
   puts("Enter Account Balance:");
   scanf("%lf", &temp.bal);
   puts("Enter Credit Limit:");
   scanf("%lf", &temp.lim);

   *acnt = temp;

   printf("Account %d created.", temp.acntnum);
 }

 // make purchase
 void mk_pch(Account * acnt) {
   double purchase;

   if(acnt->acntnum > 0) {
     puts("Enter price of purchase");
     scanf("%lf", &purchase);
     if(purchase <= acnt->bal && purchase <= acnt->lim) {
       acnt->bal -= purchase;
       add_pmt(acnt, purchase);
     } else {
       pmt_fail();
     }
   } else {
     puts("No Account Created!");
   }
 }

 void add_pmt(Account * acnt, double prch) {
   Purchase pch;
   pch.acntnum = acnt->acntnum;
   pch.tm = 1;
   pch.amnt = prch;
   pch.approved = true;
   acnt->pchs[acnt->pc] = pch;
   acnt->pc++;
   printf("Item added to purchase history\n");
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

 // lists purchase history
 void ls_his(Account * acnt) {
   Purchase temp;

   printf("Purchase History\n");
   printf("    Account Number:\tTime:\tPurchase:\tAprroved:\n");
   for(int i = 0; i < PCH_MAX; i++) {
     temp = acnt->pchs[i];
     printf("%d) %d\t%lf\t%lf\t%d\n", i+1, temp.acntnum, temp.tm, temp.amnt, temp.approved);
   }
 }

 // lists information about account
 void ls_info(Account * acnt) {
   if(acnt->acntnum > 0) {
     printf("First Name: \t%s\tLast Name: \t%s\n", acnt->fname, acnt->lname);
     printf("Account Number: \t%d\nAccount Balance: \t$%.2lf\n", acnt->acntnum, acnt->bal);
     ls_his(acnt);
   } else {
     puts("No Account Created!");
   }
 }
