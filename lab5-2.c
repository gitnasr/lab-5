#include <stdio.h>
#include <stdlib.h>

int main2()
{
    char user_name[64];

    printf("Can you enter your name please? ");

    scanf("%s",user_name);

    char name_revered[64];
    int move = 0;
    for (int i =63; i >= 0; i--)
    {
        char current_char = user_name[i];
        if (current_char != '\0')
        {
            name_revered[move] = current_char;
            move++;

        }



    }
    name_revered[move] = '\0';

    printf("Reversed name is %s",name_revered);
    return 0;

}




