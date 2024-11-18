
#include <stdio.h>
#include <stdlib.h>

int main3()
{
    char username[64];
    printf("Enter your username: ");

    scanf("%s",username);
    int len = 0;

    while(username[len] != '\0'){
        len++;

    }
    printf("You username length is %d", len);

    return 0;
}




