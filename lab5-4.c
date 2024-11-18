#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char first_string[64];
    char secound_string[64];
    printf("Enter your first string: ");
    scanf("%s", first_string);
    printf("Enter your second string: ");
    scanf("%s", secound_string);

    for (int i = 0; i < 63; i++)
    {
        first_string[i] = tolower(first_string[i]);
    }
    for (int i = 0; i < 63; i++)
    {
        secound_string[i] = tolower(secound_string[i]);
    }

    int isIdetical = strcmp(first_string,secound_string);

    if (isIdetical == 0)
    {
        printf("Good News, Matched.");
    }
    else
    {
        printf("Not Matched.");
    }

    return 0;
}





