
 /* account.h -- header files for structure account */

 #include <stdio.h>
 #include <stdbool.h>

 #define PCH_MAX 25               // maximim number of purchase history


 typedef struct account {
   int    acntnum;                // account number
   double bal;                    // balance of account
   double lim;                    // credit limit, maximum amount per payment
   double pchs[PCH_MAX];          // purchase history
   int    pchc;                   // index for array pchs[]
 } Account;

 /* Prototypes */

 // condition:
 // precondition:
 // postcondition:
 void init_acnt(Account * acnt);

 // condition:
 // precondition:
 // postcondition:
 void mk_acnt(Account * acnt);

 // condition:
 // precondition:
 // postcondition:
 void mk_pch(Account * acnt);

 // condition:
 // precondition:
 // postcondition:
 void chk_bal(Account * acnt);

 // condition:
 // precondition:
 // postcondition:
void chk_crdt(Account * acnt);

 // condition:
 // precondition:
 // postcondition:
 void pmt_fail(void);

 // condition:
 // precondition:
 // postcondition:
 void ls_info(Account * acnt);

