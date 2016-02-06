
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
 bool mk_pch();

 //
 //
 //
 bool chk_bal();

 //
 //
 //
 bool chk_crdt();

 //
 //
 //
 void pmt_fail();

 //
 //
 //
 void ls_info();

