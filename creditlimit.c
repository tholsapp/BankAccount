
 /* creditlimit.c -- checks credit of an account */

 #include <stdio.h>

 #define ACC_MAX 10   // maximum number of accounts
 #define PCH_MAX 25i  // maximum number of purchases

 int menu(void);                // diplays menu of choices
 bool mkacc(void);              // make new account
 bool mkpch(double * pch);      // delete account
 bool addcdt(Account * pa);     // add credit to an account
 bool chlim(Account * pa);      // change credit limit
 bool overlmt(Account * pa);    // an account is over their credit limit
 char lsaccs(Account  * pa[]);  // list all accounts
 char lspchs(Account * pa);     // list all purchases made by an account

 typedef struct account {
   int accountnumumber;
   double balance;
   double charges;
   double credit;
   double limit;
   double purchases[PCH_MAX];
   int purchasecount
 } Account;

 const char * output[4] = {
   " Account Number:      ",
   " Credit Limit:        ",
   " Balance:             ",
   " Status:              "
 }

 int main(void) {
   Account acc;
   Account accs[A_LEN_MAX];
   int choice;

   while((choice = menu()) != -1) {

   }

   puts("Bye! Have a beautiful time");
 }

 int menu(void) {
    int ch;
    printf("Enter account number:  ");
    scanf("%d\n", &account.accnum);
    printf("Enter beginning balance:  ");
    scanf("%lf\n", &account.balance)
    printf("Enter total charges:  ");
    scanf("%lf\n", &account.charges);
    printf("Enter total credit:  ");
    scanf("%lf\n", &account.credit);
    printf("Enter credit limit:  ");
    scanf("%lf\n", &account.limit);

   return ch;
 }
