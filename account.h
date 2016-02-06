
 /* account.h -- header files for structure account */

 #include <stdio.h>
 #include <stdbool.h>

 #define PCH_MAX 25          // maximim number of purchase history


 typedef struct account {
   int    acntnum;              // account number
   double bal;               // balance of account
   double lim;               // credit limit, maximum amount per payment
   double pchs[PCH_MAX];     // purchase history
   int    pchc;              // index for array pchs[]
 } Account;

 /* Prototypes */

 //
 //
 //
 void init_acnt(Account * acnt);

 //
 //
 //
 void mk_acnt(Account * acnt);

 //
 //
 //
 void mk_pch(Account * acnt);

 //
 //
 //
 bool chk_bal(Account * acnt);

 //
 //
 //
 bool chk_crdt(Account * acnt);

 //
 //
 //
 void pmt_fail(void);

 //
 //
 //
 void ls_info(Account * acnt);

