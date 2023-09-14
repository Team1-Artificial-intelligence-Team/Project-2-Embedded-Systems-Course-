#include <stdio.h>
#include "functions.h"

int main()
{
    int choice;
    char do_choice, exit;
    // Define user input array
    int array[9];
    int *ptr = array;

    do
    {
    logo();
    printf("\n");
    strcntr("", 100);
    printf("\n");
    strcntr("Enter your choice 1-ascending 2-desending:", 100);
    printf("\n");
    strcntr("", 100);
    printf("\n");


    scanf("%d",&choice);
    fflush(stdin);
    printf("\n");
    


    // Function to sort the array and print
    switch (choice)
    {
    case 1:
        // Function to scan the array
        input(ptr);
        sortA(ptr);
        
        break;
    case 2:
        // Function to scan the array
        input(ptr);
        sortD(ptr);
        break;

    default:
        strcntr("", 100);
        printf("\n");
        strcntr("Wrong choice ... please choose 1 or 2", 100);
        printf("\n");
        strcntr("", 100);
        printf("\n");
        printf("\n");
        printf("\n");
        break;
    }
    
    strcntr("", 100);
    printf("\n");
    strcntr("Do you want to try again? y/n", 100);
    printf("\n");
    strcntr("", 100);
    printf("\n");
    scanf("%c", &do_choice);
    fflush(stdin);
    } while (do_choice == 'Y' || do_choice == 'y');

    printf("Enter any key to exit...");
    scanf("%c", &exit);
    
    return 0;
}