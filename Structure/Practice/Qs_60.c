// Make a structure to store Bank Account Information of a customer of ABC Bank. Also, make an alias for it.
#include <stdio.h>
typedef struct account
{
    char account_number[20];
    char account_type[10];
    char key[10];
    char name[20];
    char blood[10];
    char nid[20];
    char phone[20];
    char address[50];
    char profession[20];
    char nominee_name[20];
    char nominee_blood[10];
    char nominee_nid[20];
    char nominee_phone[20];
    char nominee_profession[10];
    char nominee_relation[10];
    int credit_history;
} data;

void printInfo (data customer)
{
    printf("Customer details                :\n\n");
    printf("Account no                      : %s\n", customer.account_number);
    printf("Account type                    : %s\n", customer.account_type);
    printf("Account key                     : %s\n", customer.key);
    printf("Account holder name             : %s\n", customer.name);
    printf("Account holder blood group      : %s\n", customer.blood);
    printf("Account holder nid no           : %s\n", customer.nid);
    printf("Account holder phone no         : %s\n", customer.phone);
    printf("Account holder address          : %s\n", customer.address);
    printf("Account holder profession       : %s\n", customer.profession);
    printf("Account nominee name            : %s\n", customer.nominee_name);
    printf("Account nominee blood group     : %s\n", customer.nominee_blood);
    printf("Account nominee nid no          : %s\n", customer.nominee_nid);
    printf("Account nominee phone no        : %s\n", customer.nominee_phone);
    printf("Account nominee profession      : %s\n", customer.nominee_profession);
    printf("Account nominee relation        : %s\n", customer.nominee_relation);
    printf("Account holder credit history   : %d credit\n", customer.credit_history);
}

int main ()
{
    data customer1 = {"ABC12094354", "Regular", "ky2#1@8*z", "Nazmus Sakib", "A+", "45123413121", "(+880)1881296235", "65/5 Kadamtala, East Basabo, Dhaka-1214", "Software Engineer",
                    "Umme Kulsum", "AB+", "49213845320", "+8801907232841", "Housewife", "Mother", 180 };
    printInfo(customer1);

    return 0;
}