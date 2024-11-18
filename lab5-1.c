#include <stdio.h>
#include <stdlib.h>

int main1()
{

    char first_name[32];
    char last_name[32];
    printf("Enter your first name: ");
    scanf("%s",first_name);
    printf("Enter your second name: ");
    scanf("%s",last_name);


    char full_name[64];

    int move = 0;


    for (int i = 0; first_name[i] != '\0'; i++)
    {
        full_name[move] = first_name[i];
        move++;
    }

    full_name[move] = ' ';
    move++;

    for (int i = 0; last_name[i] != '\0'; i++)
    {
        full_name[move] = last_name[i];
        move++;
    }
    full_name[move] = '\0';
    printf("Your full name is: %s",full_name);
    return 0;
}




