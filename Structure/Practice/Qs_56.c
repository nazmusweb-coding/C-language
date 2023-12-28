// Enter address (house no, block, city, state) of 5 people
#include <stdio.h>
typedef struct people_details
{
    char name[20];
    char house_no[20];
    char block[40];
    char city[20];
    char state[20];
    int postal_code;
} log;// alias of sturct people_details

void initialscanInfo (int *n)
{
    printf("How many people's address do you want to save : ");
    scanf("%d", &(*n));
    getchar();// for consuming newline character from the buffer
}

void scanInfo (log *people, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Stranger's Information: %d\n\n", i+1);
        printf("Name: ");
        fgets(people[i].name, sizeof(people->name), stdin);
        printf("House no: ");
        fgets(people[i].house_no, sizeof(people->house_no), stdin);
        printf("Block: ");
        fgets(people[i].block, sizeof(people->block), stdin);
        printf("City: ");
        fgets(people[i].city, sizeof(people->city), stdin);
        printf("State: ");
        fgets(people[i].state, sizeof(people->state), stdin);
        printf("Postal code: ");
        scanf("%d", &people[i].postal_code);
        getchar();// Consumes newline character after the integer input
    }
    
}

void printInfo (log people[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Stranger's Information: %d\n\n", i+1);
        printf("Stranger's name: %s", people[i].name);
        printf("Stranger's house no : %s", people[i].house_no);
        printf("Stranger's block: %s", people[i].block);
        printf("Stranger's city: %s", people[i].city);
        printf("Stranger's state: %s", people[i].state);
        printf("Stranger's postal code: %d\n\n", people[i].postal_code);
    }
    
}

int main ()
{
    int n;//number of person
    initialscanInfo(&n);

    log person[n];

    scanInfo(person, n);//takes input
    printInfo(person, n);//prints address

    return 0;
}