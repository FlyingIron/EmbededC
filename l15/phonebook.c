#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct user
{
    char name[32];
    unsigned int phone;
};

void main()
{
    struct user phonebook[10];
    memset(phonebook, 0, sizeof(phonebook));

    sprintf(phonebook[0].name, "%s", "Baron");
    phonebook[0].phone = 583647269;
    sprintf(phonebook[3].name, "%s", "Gena");
    phonebook[3].phone = 721935482;
    sprintf(phonebook[4].name, "%s", "Sveta");
    phonebook[4].phone = 815541213;
    sprintf(phonebook[6].name, "%s", "Dasha");
    phonebook[6].phone = 571264812;
    sprintf(phonebook[5].name, "%s", "Roma");
    phonebook[5].phone = 192348567;

    int key = 0;
    int userNumber = 0;
    unsigned int phoneNumber = 0;
    short int isCycleContinuing = 1;
    short int isEmpty = 1;

    printf("To operate the phone book:\n1 - list of users\n2 - delete user\n3 - add new user\n4 - search users by their phone\n5 - close programm.\n");

    while (isCycleContinuing == 1)
    {
        printf ("enter command: ");
        scanf("%d", &key);
        switch (key)
        {
        case 1:
            printf("the content of phonebook:\n");
            for(int i = 0;i < 10;i++)
            {
                if (phonebook[i].phone != 0)
                {
                printf("User[%d]. Name: %s, phone number: %d\n", i+1, phonebook[i].name, phonebook[i].phone);
                isEmpty = 0;
                }
                
                if (isEmpty == 1) 
                {
                    printf("Phone book is empty!\n");
                    isEmpty = 1;
                }
            }
            break;
        
        case 2:
            printf("input which user should be deleted from phonebook(his number): ");
            scanf("%d", &userNumber);
            memset(phonebook[userNumber-1].name, 0, sizeof(struct user));
            printf("User[%d]. Name: %s, phone number: %d WAS DELETED!\n", userNumber, phonebook[userNumber-1].name, phonebook[userNumber-1].phone);
            break;

        case 3:
            for(int i = 0; i<10; i++)
            {
                if (phonebook[i].phone == 0)
                {
                    printf("\nenter the name of new user: ");
                    scanf("%s", phonebook[i].name);
                    printf("\nenter phone number of new user: ");
                    scanf("%u", &phonebook[i].phone);
                    break;
                }
                else if (i == 9) printf("\nThere's no place in phonebook!");
            }
            break;

        case 4:
            printf("\nplease input phone number of user to search: ");
            scanf("%d", &phoneNumber);
            for(int i = 0; i<10; i++)
            {
                if(phonebook[i].phone == phoneNumber)
                {
                    printf("\n This phone number belongs to user with name: %s\n", phonebook[i].name);
                    break;
                }
                else if (i == 9) printf("\nNo such user with given phone number!");
            }
            break;
        case 5:
            printf("\nclosing programm.");
            isCycleContinuing = 0;
        default:
            break;
        }
    }
}