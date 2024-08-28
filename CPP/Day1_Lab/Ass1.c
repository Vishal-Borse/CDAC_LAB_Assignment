// Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
// day, month, year. Implement the following functions.
// void initDate(struct Date* ptrDate);
// void printDateOnConsole(struct Date* ptrDate);
// void acceptDateFromConsole(struct Date* ptrDate);

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};
void initDate(struct Date *ptrDate);
void printDateOnConsole(struct Date *ptrDate);
void acceptDateFromConsole(struct Date *ptrDate);
int menu();

int main()
{
    struct Date d1;
    int choice;

    do
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            initDate(&d1);
            break;
        case 2:
            acceptDateFromConsole(&d1);
            break;
        case 3:
            printDateOnConsole(&d1);
            break;

        case 0:
            printf("Exited!!");
            break;

        default:
            printf("Enter valid choice");
            break;
        }
    } while (choice != 0);
    return 0;
}
void initDate(struct Date *ptrDate)
{
    printf("Hello");
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 1600;
}
void printDateOnConsole(struct Date *ptrDate)
{
    printf("Entered Date : ");
    printf("%d / %d / %d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}
void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter Date this format (D M YYYY) : ");
    scanf("%d %d %d", &ptrDate->day, &ptrDate->month, &ptrDate->year);
    if (ptrDate->day > 31 || ptrDate->day < 0 || ptrDate->month > 12)
    {
        printf("Enter Valid Data !!\n");
        return;
    }
}
int menu()
{
    int choice;
    printf("0. EXIT\n");
    printf("1. Initialize Time\n");
    printf("2. Accept Time\n");
    printf("3. Display Time\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    return choice;
}
