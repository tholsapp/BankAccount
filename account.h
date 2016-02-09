
 /* account.h -- header files for structure account */

 #include <stdio.h>
 #include <stdbool.h>

 #define PCH_MAX 25               // maximim number of purchase history
 #define MAX_LEN 30               // maximun length of names


 typedef struct account {
   char   fname[MAX_LEN];         // first name
   char   lname[MAX_LEN];         // last name
   int    acntnum;                // account number
   double bal;                    // balance of account
   double lim;                    // credit limit, maximum amount per payment
   double pchs[PCH_MAX];          // purchase history
   int    pchc;                   // index for array pchs[]
 } Account;

 /* Prototypes */

 // operation:        initialize account
 // precondition:     acnt points to an account
 // postcondition:    account is initialized to being empty
 void init_acnt(Account * acnt);

 // operation:        create an annount
 // precondition:     acnt points to an account
 // postcondition:    account is created
 void mk_acnt(Account * acnt);

 // operation:        make a purchase
 // precondition:     acnt points to an account
 // postcondition:    if purchase is under credit limit and under
 //                   current balance, then procede with transaction,
 //                   otherwise deny transaction
 void mk_pch(Account * acnt);

 // operation:        checks current balance of an previously
 //                   ititialized account
 // precondition:     acnt points to an account
 // postcondition:    prints current balance
 void chk_bal(Account * acnt);

 // operation:        check current credit limit
 // precondition:     acnt points to an account
 // postcondition:    prints current credit limit
 void chk_crdt(Account * acnt);

 // operation:        payment fail message
 // precondition:     mk_pch() was called
 // postcondition:    if payment fails, then print fail message,
 //                   otherwise function is not called
 void pmt_fail(void);

 // operation:        prints information about a previously
 //                   initialized account
 // precondition:     acnt points to an account
 // postcondition:    prints account information
 void ls_info(Account * acnt);

